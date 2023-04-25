//jshint esversion: 6

const express = require('express');
const bodyParser = require('body-parser');

const app = express();
app.use(bodyParser.urlencoded({ extended: true }));

//CALCULATOR 
app.get("/", function (req, res) {
    res.sendFile(__dirname + "/index.html");
});

//CALCULATOR CAL
app.post("/", function (req, res) {

    var num1 = Number(req.body.num1);
    var num2 = Number(req.body.num2);

    var result = num1 + num2;

    console.log(result);

    res.send("Result: " + result);
});

//BMI CALCULATOR
app.get("/bmicalculator", function (req, res) {
    res.sendFile(__dirname + "/bmiCalculator.html");
});

//bmi calculator cal
app.post("/bmicalculator", function (req, res) {

    var weight = parseFloat(req.body.weight);
    var height = parseFloat(req.body.height);

    var result = (weight / Math.pow(height, 2)).toFixed(1);

    console.log(result);

    res.send("Result: " + result);
});

app.listen(3000, function(){
    console.log("Server is running on port 3000");
});