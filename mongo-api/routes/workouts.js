var Workout = require('../models/workout').Workout;

exports.create = function(req, res) {
    var workout_name = req.body.workout_name; // Name of workout.
    var description = req.body.workout_description; // Description of the workout
      
    console.log("workout_name = " + workout_name)


    Workout.findOne({ name: { $regex: new RegExp(workout_name, "i") } },
		    function(err, doc) { // Using RegEx - search is case insensitive
			if(!err && !doc) {
			    var newWorkout = new Workout();
			    
			    newWorkout.name = workout_name;
			    newWorkout.description = description;
			    newWorkout.save(function(err) {
				if(!err) {
				    res.json(201, {message: "Workout created with name: " +
						   newWorkout.name });
				} else {
				    res.json(500, {message: "Could not create workout.Error: " + err});
				}	
			    });
			} else if(!err) {
			    // User is trying to create a workout with a name that
			    // already exists.
			    res.json(403, {message: "Workout with that name already exists, please update instead of create or create a new workout with a different name."});
			} else {
			    console.log(err);
			    res.json(500, { message: err});
			}
		    });
      
}
      
exports.index = function(req, res) {
    Workout.find({}, function(err, docs) {
	if(!err) {
	    res.json(200, { workouts: docs });
	} else {
	    res.json(500, { message: err });
	}
    });
}

exports.show = function(req, res) {
  
    var id = req.params.id; // The id of the workout the user wants to look up.
	Workout.findById(id, function(err, doc) {
	    if(!err && doc) {
		res.json(200, doc);
	    } else if(err) {
		res.json(500, { message: "Error loading workout." + err});
	    } else {
		res.json(404, { message: "Workout not found."});
	    }
	});
}

exports.delete = function(req, res) {
      
    var id = req.body.id;
    Workout.findById(id, function(err, doc) {
	if(!err && doc) {
	    doc.remove();
	    res.json(200, { message: "Workout removed."});
	} else if(!err) {
	    res.json(404, { message: "Could not find workout."});
	} else {
	    res.json(403, {message: "Could not delete workout. " + err});
	}
    });
}

exports.update = function(req, res) {  
    var id = req.body.id;
    var workout_name = req.body.workout_name;
    var workout_description = req.body.workout_description;
      
    Workout.findById(id, function(err, doc) {
	if(!err && doc) {
            doc.name = workout_name;
            doc.description = workout_description;
            doc.save(function(err) {
		if(!err) {
		    res.json(200, {message: "Workout updated: " +
				   workout_name});
		} else {
		    res.json(500, {message: "Could not update workout. " +
				   err});
		}
            });
	} else if(!err) {
            res.json(404, { message: "Could not find workout."});
	} else {
            res.json(500, { message: "Could not update workout. " +
			    err});
	}
    });
}