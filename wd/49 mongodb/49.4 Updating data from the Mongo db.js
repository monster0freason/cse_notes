//  topic:Updating data from the Mongo Database

db.items.updateOne({num1:20},{$set:{num2:100}})
// #163.1 this is how we update database.