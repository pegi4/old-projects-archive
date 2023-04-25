//jshint esversion: 6

const express = require('express')

const app = express();

app.get("/", function (req, res) {
    res.send("<h1>Hello World</h1>");
});

app.get("/contact", function (req, res) {
    res.send("<h3>Contact me on vito.senic@gmail.com</h3>");
})

app.get("/about", function (req, res) {
    res.send("I'm sorry, but PEDER MED VRSTICAMImodel");
})

app.listen(3000, function(){
    console.log("Server is running on port 3000");
});