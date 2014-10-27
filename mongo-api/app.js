var express = require('express');
var path = require('path');
var favicon = require('static-favicon');
var logger = require('morgan');
var cookieParser = require('cookie-parser');
var bodyParser = require('body-parser');
var workouts = require('./routes/workouts');
var trivia_user = require('./routes/trivia_user');
var trivia_badge = require('./routes/trivia_badge');
var mongoose = require('mongoose');
var routes = require('./routes/index');
var users = require('./routes/users');

var app = express();

mongoose.connect('mongodb://localhost/workout_tracker');

// view engine setup
app.set('views', path.join(__dirname, 'views'));
app.set('view engine', 'jade');

app.use(favicon());
app.use(logger('dev'));
app.use(bodyParser.json());
app.use(bodyParser.urlencoded());
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', routes);
//app.use('/users', users);

// Testing api routes

app.post('/workouts', workouts.create);
app.get('/workouts', workouts.index);
app.get('/workouts/:id', workouts.show);
app.put('/workouts', workouts.update);
app.delete('/workouts', workouts.delete);

/// Trivia api routes ///

//user

app.post('/subscribe', trivia_user.subscribe);
app.get('/users', trivia_user.get_all_users);
app.get('/user/:id', trivia_user.get_user);
app.get('/userName/:userName', trivia_user.get_user_by_userName);
app.post('/login', trivia_user.login);
app.put('/users', trivia_user.update);

// badges

app.post('/badges', trivia_badge.create_badge);
app.get('/badges', trivia_badge.get_all_badges);
app.put('/badges', trivia_badge.update);
app.delete('/badges', trivia_badge.delete);

/// catch 404 and forward to error handler
app.use(function(req, res, next) {
    var err = new Error('Not Found');
    err.status = 404;
    next(err);
});

/// error handlers

// development error handler
// will print stacktrace
if (app.get('env') === 'development') {
    app.use(function(err, req, res, next) {
        res.status(err.status || 500);
        res.render('error', {
            message: err.message,
            error: err
        });
    });
}

// production error handler
// no stacktraces leaked to user
app.use(function(err, req, res, next) {
    res.status(err.status || 500);
    res.render('error', {
        message: err.message,
        error: {}
    });
});

module.exports = app;
