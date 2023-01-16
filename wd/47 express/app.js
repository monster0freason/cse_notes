//       #topic:express app,static files.

// #151.1 express is a framework for nodejs that provides us some function which helps us in creating a custom backend 

// #151.2 we are making this express folder as a node project(using npn init)

const express=require('express');// #151.3.1 imported express
const app=express();//#151.3.2 made an app using express
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

app.set('views',path.join(__dirname,'views'))

// #153.4 our pug demo endpoint
app.get('/demo', (req, res) => {
    res.status(200).render('demo', { title: 'i am ankit', message: 'Hello there! you can call me kabir' })
})

  app.get('/index2',(req,res)=>{
    res.status(200).render('index2.pug')
  })