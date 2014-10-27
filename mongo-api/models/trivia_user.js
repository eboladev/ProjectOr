var mongoose = require('mongoose')
, Schema = mongoose.Schema
, validate = require('mongoose-validate')
, bcrypt = require('bcrypt')
, Badge = require('../models/trivia_badge').Trivia_badge
, SALT_WORK_FACTOR = 10
, MAX_LOGIN_ATTEMPTS = 5
, LOCK_TIME = 2 * 60 * 1000;

var userSchema = new Schema({
    firstName : { type: String, required: true, trim: true }
    , lastName : { type: String, required: true, trim: true }
    , birthDate : { type: String, required: true, trim: true }
    , userName : { type: String, required: true, trim: true, index: { unique: true } }
    , password: { type: String, required: true }
    , email : { type: String, required: true, validate: [validate.email, 'invalid email address'] }
    , community_id : { type: Number, required: true}
    , badges : [Badge]
    , lockUntil: { type: Number }
    , loginAttempts: { type: Number, required: true, default: 0 }
    , globalScore : { type: Number, default:0}
    , ranking : { type: Number, default:0}
    , credits : { type: Number, default:100}
    , date_created : { type: Date, required: true, default: Date.now}
});

// expose enum on the model
var reasons = userSchema.statics.failedLogin = {
    NOT_FOUND: 0,
    PASSWORD_INCORRECT: 1,
    MAX_ATTEMPTS: 2
};

userSchema.virtual('isLocked').get(function() {
    // check for a future lockUntil timestamp
    return !!(this.lockUntil && this.lockUntil > Date.now());
});

userSchema.methods.incLoginAttempts = function(cb) {
    // if we have a previous lock that has expired, restart at 1
    if (this.lockUntil && this.lockUntil < Date.now()) {
        return this.update({
            $set: { loginAttempts: 1 },
            $unset: { lockUntil: 1 }
        }, cb);
    }
    // otherwise we're incrementing
    var updates = { $inc: { loginAttempts: 1 } };
    // lock the account if we've reached max attempts and it's not locked already
    if (this.loginAttempts + 1 >= MAX_LOGIN_ATTEMPTS && !this.isLocked) {
        updates.$set = { lockUntil: Date.now() + LOCK_TIME };
    }
    return this.update(updates, cb);
};

userSchema.statics.getAuthenticated = function(username, password, cb) {
    this.findOne({ userName: username }, function(err, user) {
        if (err) return cb(err);

        // make sure the user exists
        if (!user) {
            return cb(null, null, reasons.NOT_FOUND);
        }

        // check if the account is currently locked
        if (user.isLocked) {
            // just increment login attempts if account is already locked
            return user.incLoginAttempts(function(err) {
                if (err) return cb(err);
                return cb(null, null, reasons.MAX_ATTEMPTS);
            });
        }

        // test for a matching password
        user.comparePassword(password, function(err, isMatch) {
            if (err) return cb(err);

            // check if the password was a match
            if (isMatch) {
                // if there's no lock or failed attempts, just return the user
                if (!user.loginAttempts && !user.lockUntil) return cb(null, user);
                // reset attempts and lock info
                var updates = {
                    $set: { loginAttempts: 0 },
                    $unset: { lockUntil: 1 }
                };
                return user.update(updates, function(err) {
                    if (err) return cb(err);
                    return cb(null, user);
                });
            }

            // password is incorrect, so increment login attempts before responding
            user.incLoginAttempts(function(err) {
                if (err) return cb(err);
                return cb(null, null, reasons.PASSWORD_INCORRECT);
            });
        });
    });
};

userSchema.methods.comparePassword = function(candidatePassword, cb) {
    bcrypt.compare(candidatePassword, this.password, function(err, isMatch) {
        if (err) return cb(err);
        cb(null, isMatch);
    });
};

userSchema.pre('save', function(next) {
    var user = this;
    // only hash the password if it has been modified (or is new)
    if (!user.isModified('password')) return next();

    // generate a salt
    bcrypt.genSalt(SALT_WORK_FACTOR, function(err, salt) {
        if (err) return next(err);

        // hash the password along with our new salt
        bcrypt.hash(user.password, salt, function(err, hash) {
            if (err) return next(err);

            // override the cleartext password with the hashed one
            user.password = hash;
            next();
        });
    });
});

var trivia_user = mongoose.model('trivia_user', userSchema);

module.exports = {
    Trivia_user: trivia_user
};