var mongoose = require('mongoose')
, Schema = mongoose.Schema;

var badgeSchema = new Schema({
    name : {type: String, required: true, trim: true, index: { unique: true }}
    , description : {type: String, required: true, trim: true}
    , status : {type: String, required: true}
});

var trivia_badge = mongoose.model('trivia_badge', badgeSchema);

module.exports = {
    Trivia_badge: trivia_badge
};