//       #topic:express app,static files.

// #151.1 express is a framework for nodejs that provides us some function which helps us in creating a custom backend 

// #151.2 we are making this express folder as a node project(using npn init)

const express=require('express');// #151.3.1 imported express
const { SocketAddress } = require('net');
const app=express();//#151.3.2 made an app using express
const fs=require("fs");
const port=80;

app.get('/',(req,res)=>{
    res.send('Hello World');
}); 
app.get('/about',(req,res)=>{
    res.send('about');
}); 
app.get('/contact',(req,res)=>{
    res.send('contact');
}); 
app.get('/services',(req,res)=>{
    res.send('get services'); // #151.3.3 hits get request in postman
});
app.post('/services',(req,res)=>{
    res.send('post services');
}); // #151.3.4 hits post request in postman

app.post('/contact',(req,res)=>{
    res.status(404).send('page not found');
}); // #151.3.5 you can also send status code .

app.listen(port,()=>{
    console.log(`server is running on port ${port}`);
})

// #151.4 use nodemon app.js command it keeps restarting the server with every change (or you can use rs command to restart)


// #152.1 static files: files that we wanna keep publically in our server(anyone can download it even without logging in with just the link.)

app.use('/static',express.static('static')) // #152.2 creating a static file named 'static'.

// #153.1 setting the tempplate engine as pug. after that i can create a .pug file.
app.set('view engine','pug'); 

// #153.2 set the views directory.and adding the path module
const path=require("path");

app.set('views',path.join(__dirname,'/views'))

// #153.4 our pug demo endpoint
app.get('/demo', (req, res) => {
    res.status(200).render('demo', { title: 'i am ankit', message: 'Hello there! you can call me kabir' })
})

  app.get('/index2',(req,res)=>{
    // #153.5.1 we store the title and content in a const variable(msg).
    const con="this is the best content"
    const msg={'title':'Hello','content':con}
    res.status(200).render('index2',msg)
  })

  app.use(express.urlencoded({extended: true}))
  // #156.1.1 this is a middleware which helps us to get the data to express

  app.post('/index2',(req,res)=>{
    // #153.5.1 we store the title and content in a const variable(msg).

    //console.log(req.body)

     // #156.1.2 this will show the submitted data in the console/terminal in the form of an object.

    name2=req.body.name2
    age=req.body.age
    gender=req.body.gender
    address=req.body.address
    more=req.body.more
    // #156.1.3 here we are using the names of input and textarea tags so that we can store the data in the variables(name2,age,gender,address,more)

    let outputtowrite =`the name of the client is ${name2},${age} years old, ${gender} residing at ${address}.---> more about him/her:${more}`
    // #156.2.1 we are storing all the info in this variable(outputtowrite).

    fs.writeFileSync('output.txt',outputtowrite)
    const msg={'message':'your form has beeb submitted successfully'}
     // #156.2.2 we are storing all the info in output.text file. we are also sending a message.

    res.status(200).render('index2.pug',msg)
  })