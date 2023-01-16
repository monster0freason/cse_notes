//          topic: 39 Nodejs

// #144.1 making a backend website
const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');

  // #144.2 here in res.end(``) we can put our html page in back-ticks which we want to show on the server.
  res.end("hello world");
});
 // #144.3 type node in terminal and it will start the REPL(read-eval-print-loop). using this we can run nodejs in terminal .

 // #144.4 _(underscore) stores the previous value of the variable.

 // #144.5 after pressing tab in REPL you will get names of all the modules in the nodejs.


server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});