const mongoose = require('mongoose');

const ProductSchema = new mongoose.Schema({
    title: {
        type: String,
        required: true,
    },
    description: {
        type: String,
        required: true,
    },
    url:{
        type: String,
        required: true,
    },
    createAt: {
        type: Date,
        default: Date.now
    }
});

const ensino = new mongoose.Schema({
    nome: {
        type: String,
        required: true,
    },
    descricao: {
        type: String,
        required: true,
    },
    url:{
        type: String,
        required: true,
    },
    createAt: {
        type: Date,
        default: Date.now
    }
});

mongoose.model('Product', ProductSchema);
mongoose.model('exemplo', ensino);