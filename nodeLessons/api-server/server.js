const express = require('express');
const mongoose = require('mongoose');
const requireDir = require('require-dir');

//Iniciando o App
const app = express();

//Iniciando o DB
mongoose.connect('mongodb+srv://erick:erick@api-clusters-0sqru.mongodb.net/API?retryWrites=true&w=majority',{
    useNewUrlParser: true,
    useUnifiedTopology: true 
});
requireDir('./src/models')

const Product = mongoose.model('Product');
const exemplo = mongoose.model('exemplo')

//Primeira rota
app.get('/', (req, res) => {
    Product.create({ 
        title: 'React Native',
        description: 'Build native apps with React',
        url: 'http://github.com/facebook/react-native'
    }),
    exemplo.create({ 
        nome: 'Juliana',
        descricao: 'adiciono uma descricao qualquer',
        url: 'a url do teu insta por exemplo'
    })
});

app.listen(3001);