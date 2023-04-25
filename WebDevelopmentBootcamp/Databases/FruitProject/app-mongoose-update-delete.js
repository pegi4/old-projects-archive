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

  Fruit.find({})
    .then((fruits) => {
      console.log('Fruits found:', fruits);

      // Close the connection
/*       db1.close()
        .then(() => {
          console.log('Mongoose connection closed');
        })
        .catch((error) => {
          console.log('Error closing Mongoose connection:', error);
        }); */

    })
    .catch((error) => {
      console.log('Error finding fruits:', error);
    });

/*     Fruit.updateOne({ _id: '6429d490978cc04ef94c81be' }, { name: 'Peach' })
    .then(() => {
      console.log('Successfully updated fruit');
    })
    .catch((error) => {
      console.log('Error updating fruit:', error);
    });

    Fruit.deleteOne({ _id: '6429d420bd3613c967a4d3df' })
    .then(() => {
      console.log('Successfully deleted fruit');
    })
    .catch((error) => {
      console.log('Error deleting fruit:', error);
    }); */

});


const db2 = mongoose.createConnection('mongodb://127.0.0.1:27017/People', {
  useNewUrlParser: true,
  useUnifiedTopology: true,
  dbName: 'People'
});

db2.once('open', async () => {
  console.log('Connected to People database');

  const personSchema = new mongoose.Schema({
    name: String,
    age: Number
  });

  const Person = db2.model('Person', personSchema);

  Person.find({}, 'name')
  .then((persons) => {
    console.log('Persons found:', persons);
  })
  .catch((error) => {
    console.log('Error finding persons:', error);
  });

  const result = await Person.deleteMany({ _id: { $ne: '6429329a5a681739ec7b7326' } }).exec();
  console.log(`${result.deletedCount} documents deleted`);

});