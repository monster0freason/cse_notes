const express = require("express");
const path = require("path");
const app = express();
const port = 8000;

// EXPRESS SPECIFIC STUFF
app.use('/static',express.static('static'))
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

// START THE SERVER
app.listen(port, () => {
    console.log(`Example app listening at http://localhost:${port}`)
});    