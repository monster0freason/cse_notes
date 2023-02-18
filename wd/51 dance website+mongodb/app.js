const express = require("express");
const path = require("path");
const app = express();
const mongoose = require('mongoose');

main().catch(err => console.log(err));

async function main() {
  mongoose.set('strictQuery', true);
  console.log(mongoose.connection.readyState) 
  await mongoose.connect('mongodb://127.0.0.1:27017/contact_dance');
  
  // use `await mongoose.connect('mongodb://user:password@127.0.0.1:27017/test');` if your database has auth enabled

  
}

const bodyparser =require('body-parser');


const port = 8001;


// #165.1 we are defining mongoose schema
var contactSchema = new mongoose.Schema({
    name: String,
    phone_no: String,
    email: String,
    address: String,
    desc: String

  });
  var contact = mongoose.model('contact', contactSchema);




// EXPRESS SPECIFIC STUFF
app.use('/static',express.static('static'))
app.use(bodyparser.urlencoded({extended: false}))
app.use(express.urlencoded())

// PUG SPECIFIC STUFF
app.set('view engine', 'pug');//set the template engine as pug
app.set('views', path.join(__dirname, 'views'));//set the views folder as views
app.set('views',path.join(__dirname, 'views')) // set the views directory



// ENDPOINTS
app.get('/', (req, res) => {
    const msg={}
    res.status(200).render('home.pug',msg);
})

app.get('/contact', (req, res) => {
    const msg={}
    res.status(200).render('contact.pug',msg);
})

app.post('/contact', (req, res)=>{
    var myData=new contact(req.body);
     myData.save()
        .then(()=>{
        res.send("this item has been saved to the database")
    }).catch(()=>{
        res.status(400).send("item was not saved to the database")
    })
    // res.status(200).render('contact.pug');
})

// START THE SERVER
app.listen(port, () => {
    console.log(`Example app listening at http://localhost:${port}`)
});    