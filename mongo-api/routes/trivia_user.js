var User = require('../models/trivia_user').Trivia_user;
var Badge = require('../models/trivia_badge').Trivia_badge;

exports.subscribe = function(req, res) {
    var firstName = req.body.firstName;
    var lastName = req.body.lastName;
    var birthDate = req.body.birthDate;
    var userName = req.body.userName;
    var password = req.body.password;
    var email = req.body.email;
    var globalScore =  req.body.globalScore;
    var ranking = req.body.ranking;
    var community_id = req.body.community_id;
    var credits = req.body.credits;

    //Using RegEx - search is case insensitive
    User.findOne({userName: { $regex: new RegExp(userName, "i")}}, function (err, doc){
	if (!err && !doc) {
	    var newUser = new User();

	    newUser.firstName = firstName;
	    newUser.lastName = lastName;
	    newUser.birthDate = birthDate;
	    newUser.userName = userName;
	    newUser.password = password;
	    newUser.email = email;
	    newUser.globalScore = globalScore;
	    newUser.ranking = ranking;
	    newUser.community_id = community_id;
	    newUser.credits = credits;
	    newUser.save(function(err) {
		if (!err) {
		    res.json(201, {message: "User successfully subscribed with username: " + newUser.userName});
		} else {
		    res.json(500, {message: "Could not subscribe user. Error: " + err});
		}
	    });
	}
	else if(!err) { // userName already exists
	    res.json(403, {message: "User " + userName + " already exists. Try again with another one"});
	} else {
	    res.json(500, { message: err});
	}
    });
}

exports.login = function(req, res) {
    var userName = req.body.userName;
    var password = req.body.password;

    User.getAuthenticated(userName, password, function(err, user, reason){
	if (!err && user){ // login was successful if we have a user
	    // handle login success
            console.log('login success');
            res.json(201, "User " + userName + " successfully loged in");
	}
	else{
	// otherwise we can determine why we failed
	    var reasons = User.failedLogin;
	    console.log(reason);
            switch (reason) {
            case reasons.NOT_FOUND:
		res.json(500, {message : "Not Found"});
            case reasons.PASSWORD_INCORRECT:
		// note: these cases are usually treated the same - don't tell
		// the user *why* the login failed, only that it did
		res.json(500, {message : "incorrect password"});
		break;
            case reasons.MAX_ATTEMPTS:
		// send email or otherwise notify user that account is
		// temporarily locked
		res.json(500, {message : "account temporary blocked because of multiple failed login"});
		break;
	    }
        }
    });
}

exports.get_user = function(req, res) {
    var userId = req.params.id;
    User.findById(userId, function(err, user){
	if(!err && user){
	    res.json(200, user);
	} else if (err){
	    res.json(500, {message: "Error loading user : " + err});
	} else {
	    res.json(404, {message: "User not found"});
	}
    });
}

exports.get_user_by_userName = function(req, res) {
    var userName = req.params.userName;
    User.findOne({userName:userName}, function(err, user){
	if(!err && user){
	    res.json(200, user);
	} else if (err){
	    res.json(500, {message: "Error loading user : " + err});
	} else {
	    res.json(404, {message: "User not found"});
	}
    });
}

exports.get_all_users = function(req, res) {
    User.find({}, function(err, docs) {
        if(!err) {
            res.json(200, { message: docs });
        } else {
            res.json(500, { message: err });
        }
    });
}

exports.update = function(req, res) {
    var id = req.body.id
    var firstName = req.body.firstName;
    var lastName = req.body.lastName;
    var birthDate = req.body.birthDate;
    var userName = req.body.userName;
    var password = req.body.password;
    var email = req.body.email;
    var globalScore =  req.body.globalScore;
    var ranking = req.body.ranking;
    var community_id = req.body.community_id;
    var credits = req.body.credits;

    User.findById(id, function(err, doc) {
	if(!err && doc) {
            doc.firstName = firstName;
	    doc.lastName = lastName;
	    doc.birthDate = birthDate;
	    doc.userName = userName;
	    doc.password = password;
	    doc.email = email;
	    doc.globalScore = globalScore;
	    doc.ranking = ranking;
	    doc.community_id = community_id;
	    doc.credits = credits;
	    
            doc.save(function(err) {
		if(!err) {
		    res.json(200, {message: "User updated: " + name});
		} else {
		    res.json(500, {message: "Could not update user. " + err});
		}
            });
	} else if(!err) {
            res.json(404, { message: "Could not find user."});
	} else {
            res.json(500, { message: "Could not update user. " + err});
	}
    });
}

exports.update = function(req, res) {
    user.findById()
}