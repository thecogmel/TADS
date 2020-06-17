const express = require('express');
const cors = require('cors');
const mongoose = require('mongoose');
const requireDir = require('require-dir'); //  require todos os models da pasta

//Iniciando o App
const app = express();
app.use(express.json());
app.use(cors());

//Iniciando o DB
mongoose.connect('mongodb+srv://erick:erick@api-clusters-0sqru.mongodb.net/API?retryWrites=true&w=majority',{
    useNewUrlParser: true,
    useUnifiedTopology: true 
});
requireDir('./src/models')

//rotas

app.use('/api', require ("./src/routes"));

app.listen(3001);