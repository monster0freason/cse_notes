// searching for data in mongo db
use kabir

db.items.find({num:20})
// #161.1 this query will return all the objects with num equal to 20

db.items.find({num2:{$gt:20}})
// #161.2 this query will return all the objects with num greater than 20

db.items.find({num2:{$gt:20},num1:{$gt:10}})
// #161.3 here (,) means AND operator

db.items.find({num2:{$lt:40}})
// #161.4 this query will return all the objects with num less than 20

db.items.find({$or:[{num2:{$gt:20}},{num1:{$gt:10}}]})
// #161.5 here ($or:) means OR operator

db.items.find({num2:{$lt:40}},{num1:1})
// #161.6 we can give a second argument(called projection) this means we only want to see rating

