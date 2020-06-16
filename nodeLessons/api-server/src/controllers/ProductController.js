const mongoose = require('mongoose');

const Product =  mongoose.model ('Product');
const Exemplo = mongoose.model ('exemplo')

module.exports = {
    async index(req, res) {
        const products =  await Product.find();
        const exemplo = await Exemplo.find();
        
        return res.json(exemplo);
        return res.json(products);
    },

    async store(req, res)  {
        const exemplo = await  Exemplo.create(req.body);
        return res.json(exemplo);
    }

}