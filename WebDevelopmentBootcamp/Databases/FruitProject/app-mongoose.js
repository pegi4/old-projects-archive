const express = require('express');
const app = express();
const mongoose = require('mongoose');

const db1 = mongoose.createConnection('mongodb://127.0.0.1:27017/FruitsDB', {
  useNewUrlParser: true,
  useUnifiedTopology: true,
  dbName: 'FruitsDB'
});

db1.once('open', () => {
  console.log('Connected to FruitsDB database');

  const fruitSchema = new mongoose.Schema({
    name: {
      type: String,
      required: [true, 'Please check your data entry, no name specified!']
    },
    rating: {
      type: Number,
      min: 1,
      max: 10
    },
    review: String
  });

  const Fruit = db1.model('Fruit', fruitSchema);

  const fruit = new Fruit({
    name: 'Apple',
    rating: 7,
    review: 'Pretty solid as a fruit.'
  });

  fruit.save()
    .then(() => {
      console.log('Fruit saved successfully');
    })
    .catch((error) => {
      console.log('Error saving fruit:', error);
    });

  const kiwi = new Fruit({
    name: 'Kiwi',
    rating: 10,
    review: 'The best fruit!'
  });

  const orange = new Fruit({
    name: 'Orange',
    rating: 4,
    review: 'Too sour for me'
  });

  const banana = new Fruit({
    name: 'Banana',
    rating: 3,
    review: 'Weird texture'
  });

  Fruit.insertMany([kiwi, orange, banana])
    .then(() => {
      console.log('Successfully inserted fruits');
    })
    .catch((error) => {
      console.log('Error inserting fruits:', error);
    });

  Fruit.find({}, 'name')
    .then((fruits) => {
      console.log('Fruits found:', fruits);

      // Close the connection
      db1.close()
        .then(() => {
          console.log('Mongoose connection closed');
        })
        .catch((error) => {
          console.log('Error closing Mongoose connection:', error);
        });

    })
    .catch((error) => {
      console.log('Error finding fruits:', error);
    });

});

const db2 = mongoose.createConnection('mongodb://127.0.0.1:27017/People', {
  useNewUrlParser: true,
  useUnifiedTopology: true,
  dbName: 'People'
});

db2.once('open', () => {
  console.log('Connected to People database');

  const personSchema = new mongoose.Schema({
    name: String,
    age: Number
  });

  const Person = db2.model('Person', personSchema);

  const person = new Person({
    name: 'Vito',
    age: 18
  });

  person.save()
    .then(() => {
      console.log('Person saved successfully');
    })
    .catch((error) => {
      console.log('Error saving person:', error);
    });

  Person.find({}, 'name')
    .then((persons) => {
      console.log('Persons found:', persons);
    })
    .catch((error) => {
      console.log('Error finding persons:', error);
    });

  app.listen(3000, () => {
    console.log('Server started on port 3000');
  });

});