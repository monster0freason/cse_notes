// #164.4 this is the setup to connect to mongoose

// getting-started.js
const mongoose = require('mongoose');


const kittySchema = new mongoose.Schema({
    name: String
  });
  // #164.5 The kittySchema defines the structure of the documents that will be stored in the "kitties" collection in the "test" database. The schema is used to define a model, which you can use to perform CRUD operations on the "kitties" collection.

  // #164.6 You can also put this schema in a separate file and import it to the file where you are using the main function. This way you can organize your code better, if the schema becomes more complex and you want to keep your main function clean

  kittySchema.methods.speak = function speak() {
    const greeting = this.name
      ? "Meow name is " + this.name
      : "I don't have a name";
    console.log(greeting);
  };
  // #164.9 we can aloso create methods in class here (speak())

  const Kitten = mongoose.model('Kitten', kittySchema);
  // #164.7 A model in Mongoose is a constructor function that is used to create documents. When you create a model, Mongoose automatically creates a new MongoDB collection with the same name as the model, in the specified database. You can then use the model to perform CRUD (create, read, update, and delete) operations on the documents in the collection.

main().catch(err => console.log(err));

async function main() {
    mongoose.set('strictQuery', true);

  await mongoose.connect('mongodb://127.0.0.1:27017/test');
  
  // use `await mongoose.connect('mongodb://user:password@127.0.0.1:27017/test');` if your database has auth enabled

  
  const silence = new Kitten({ name: 'tom' });
  const elonm = new Kitten({ name: 'mars' });
   console.log(silence.name); 
   // #164.8 A model is a class with which we construct documents. In this case, each document will be a kitten with properties and behaviors as declared in our schema.(here silence ia an object)
   silence.speak();


   await silence.save();
   silence.speak();
   await elonm.save();
   // #164.10 Each document can be saved to the database by calling its save method. The first argument to the callback will be an error if any occurred.

   const kittens = await Kitten.find({name:'mars'});
   console.log(kittens);
   // #164.11 We can access all of the kitten documents through our Kitten model.





   

}