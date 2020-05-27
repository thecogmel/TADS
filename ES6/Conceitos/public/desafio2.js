const usuarios = [{
    nome: 'Diego',
    idade: 23,
    empresa: 'Rocketseat'
},
{
    nome: 'Gabriel',
    idade: 15,
    empresa: 'Rocketseat'
},
{
    nome: 'Lucas',
    idade: 30,
    empresa: 'Facebook'
},
];

let usersAge = usuarios.map(function (item) {

    return item.idade;
});

let adult = usuarios.filter(function (item) {
    return item.idade >= 18 && item.empresa === 'Rocketseat';
});
let google = usuarios.find(function (item) {
    return item.empresa === 'Google'
});

let operation1 = usuarios.map(function (item) {
    item.idade = item.idade * 2
    return item;
});

let operation2  = operation1.filter(function (item) {
    return item.idade <= 50
}) 

document.getElementById('button').onclick = function () {
    console.log(usersAge);
    console.log(adult);
    console.log(google);
    console.log(operation2);   
}