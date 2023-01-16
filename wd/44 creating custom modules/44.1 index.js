//      topic: creating custom modules in nodejs

// const average=require("./44.2 mod");
// console.log(average([3,4]));
// console.log("this is index.js")

const mod=require("./44.2 mod");
console.log(mod.avg([3,4,8]));
console.log("this is index.js")
console.log(mod.name);