const express = require('express');
const assert = require('node:assert');
const app = express();

const MongoClient = require('mongodb').MongoClient;

// Server connection
MongoClient.connect("mongodb://127.0.0.1:27017/test")
    .then(client => {
        console.log("Connected correctly to server");
        // Create a new database
        const db = client.db('FruitsDB');

        // Insert a documents
        InsertDocuments(db, () => {
            client.close();
        })
    })
    .catch(err => {
        console.log("Error connecting to database:", err);
    });

const InsertDocuments = (db, callback) => {
    console.log("InsertDocuments");
    // Get the documents collection
    const collection = db.collection('fruits');
    // Insert some documents
    collection.insertMany([
        {
            name: 'Banana',
            score: 1,
            reviw: "Great banana"
        },
        {
            name: 'Apple',
            score: 2,
            reviw: "Great Apple"
        }
    ], (err, result) => {
        assert.equal(err, null);
        assert.equal(3, result.result.n);
        assert.equal(3, result.ops.length);
        console.log("Inserted 3 documents into the collection");
        callback(result);
    }
    );
}

app.listen(3000, () => {
    console.log("Server started on port 3000");
});