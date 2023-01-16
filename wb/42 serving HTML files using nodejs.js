//        topic:42 serving HTML files using nodejs

// #147.1 Node.js has a built-in module called HTTP, which allows Node.js to transfer data over the Hyper Text Transfer Protocol (HTTP).To include the HTTP module, use the require() method:
const http =require('http')
const fs =require('fs')

// #147.2 we are going to serve this template using our server
const fileContent=fs.readFileSync('21 css before and after pseudo selectors.html')
const server = http.createServer((req,res)=>{
    res.writeHead(200, {'Content-Type': 'text/html'})
    res.end(fileContent)
})

server.listen(80,'127.0.0.1',()=>{
    console.log('listening on port 80');
})