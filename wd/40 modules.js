//            topic:   40 modules

// #145.2 The Node.js file system module allows you to work with the file system on your computer.To include the File System module, use the require() method:
const fs=require("fs");

// #145.2 reading a file in nodejs
let text=fs.readFileSync("file.txt","utf-8");
console.log(text);
text=text.replace("writing","reading");
console.log(text);

// #145.3 writing a file in nodejs
fs.writeFileSync("new.txt",text);
let neww=fs.readFileSync("new.txt","utf-8");
console.log(neww);

// #145.4 third party modules -> we install it from npnjs.com 

