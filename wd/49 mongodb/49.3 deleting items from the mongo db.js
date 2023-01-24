// deleting items from the mongo database

db.items.find({field4:"value4"})

db.items.deleteOne({field4:"value4"})
// #162.1 deleteOne will delete the matching document entry and will delete the first entry in case of multi document match.

db.items.deleteMany({field4:"value4"})
// #162.2 deleteMany will delete all the matching document entry.