//     topic: 41 blocking vs non-blocking execution

// #146.1 synchronous(blocking execution)-->line by line execution of the code.

// #146.2 asynchronous(non-blocking execution)--> line by line execution not guaranteed,callbacks will fire.[fs.readFile("file.txt","utf-8")->will throw an error] . to remove that error readFile function requires a third argument
const fs = require("fs");
fs.readFile("file.txt","utf-8",(err,data)=>{
    console.log(data);
}) 
console.log("this is a message")
// #146.3 "this is a message" will run first beacause this is asynchronous and will not wait for the file to be read to execute the rest of the operation. 