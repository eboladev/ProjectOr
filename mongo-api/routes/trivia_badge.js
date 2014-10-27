var User = require('../models/trivia_user').Trivia_user;
var Badge = require('../models/trivia_badge').Trivia_badge;

exports.create_badge = function(req, res) {
    var name = req.body.name;
    var description = req.body.description;
    var status = req.body.status;

    Badge.findOne({name:  {$regex: new RegExp(name, "i")}}, function (err, badge){
	if (!err && !badge){
	    var newBadge = new Badge();
	    newBadge.name = name;
	    newBadge.description = description;
	    newBadge.status = status;
	    newBadge.save(function(err){
		if (!err) {
                    res.json(201, {message: "Badge \"" + name + "\" successfully created"});
                } else {
                    res.json(500, {message: "Could not create badge. Error: " + err});
                }
	    });
	} else if(!err) { // badge name already exists
	    res.json(403, {message: "Badge \"" + name + "\" already exists"});
	} else {
	    res.json(500, {message: err});
	}
    });
}

exports.get_all_badges = function(req, res) {
    Badge.find({}, function(err, badges) {
	if(!err) {
            res.json(200, { message: badges });
        } else {
            res.json(500, { message: err });
        }
    });
}

exports.update = function(req, res) { 
    var id = req.body.id;
    var name = req.body.name;
    var description = req.body.description;
    var status = req.body.status;

    Badge.findById(id, function(err, doc) {
	if(!err && doc) {
            doc.name = name;
            doc.description = description;
	    doc.status = status;
            doc.save(function(err) {
		if(!err) {
		    res.json(200, {message: "Badge updated: " + name});
		} else {
		    res.json(500, {message: "Could not update badge. " + err});
		}
            });
	} else if(!err) {
            res.json(404, { message: "Could not find badge."});
	} else {
            res.json(500, { message: "Could not update badge. " + err});
	}
    });
}

exports.delete = function(req, res) {
    var id = req.body.id;
    Badge.findById(id, function(err, doc) {
        if(!err && doc) {
            doc.remove();
            res.json(200, { message: "Badge removed."});
        } else if(!err) {
            res.json(404, { message: "Could not find badge."});
        } else {
            res.json(403, {message: "Could not delete badge. " + err});
        }
    });
}