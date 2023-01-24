//    topic:49 inserting data into mongo database

use kabir
// #160.1 (use) this command opens a existing file or creates a new one 

db.items.insertOne({field1:"value1",field2: "value2",})
// #160.2 here we are inserting a document({field1:"value1",field2: "value2",}) which is in JSON form to a collection called(kabir) with the help of(db.items.insertOne())

db.items.insertMany([{field3:"value3",field4: "value4",},{num1: 20,num2: 34}])
// #160.3 this can insert many documents(JSON) in one go.

show dbs 
// #160.4 shows all the database

show collections
// #160.5 sows all the collections.

db.(collection name).find()
// #160.6 shows all the documents in the the collection