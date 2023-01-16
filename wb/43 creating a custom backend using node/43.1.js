//       topic:Creating a Custom Backend Using NodeJs

const http = require('http');
const fs= require('fs');
const hostname ='127.0.0.1';
const port =3000;
const home=fs.readFileSync('./home.html');
const about=fs.readFileSync('./about.html');
const services=fs.readFileSync('./services.html');
const contact=fs.readFileSync('./contact.html');


const server = http.createServer((req, res) =>{
    console.log(req.url);
    url=req.url;

    res.statusCode=200;
    res.setHeader('Content-Type', 'text/html');
    if(url=='/'){
        res.end(home);
    }
    else if(url=='/home'){
        res.end(home);
    }
    else if(url=='/about'){
        res.end(about);
    }
    else if(url=='/contact'){
        res.end(contact);
    }
    else if(url=='/services'){
        res.end(services);
    }
    else{
        res.end("<h1>404 not found</h1> ");
    } 

});
server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
  });