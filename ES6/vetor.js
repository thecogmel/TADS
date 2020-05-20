var arr = [1, 2, 3, 4, 5, 8, 9];

const percorre = arr.map (function(item){
    return item * 2;
});

const sum = arr.reduce (function(total, next){
    return total + next;
});

const filter = arr.filter (function(item){
    return item % 2 === 0;
});

const find = arr.find (function(item){
    return item === 4;
});



console.log (percorre) //.map percorre o vetor
console.log(sum) // reduz tudo a uma unico numero
console.log(filter); // aplica a condição no array pelo filter !!tem que ser true ou false!!
console.log(find); // procura a condição definida no array;