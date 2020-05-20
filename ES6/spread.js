// REST | puxa uam variavel e depois coloca o resto em outra variavel

const usuario = {
    nome : "erick",
    idade: 24,
    empresa: 'Rocketseat'
};

const {nome, ...resto} = usuario;
console.log(nome);
console.log(resto);

//SPREAD

const arr1 = [1, 2, 3];
const arr2 = [4, 5, 6];

const arr3 = [...arr1, ...arr2];

console.log(arr3);
