var endereco = {
    rua: "Rua Londes",
    numero: 08,
    bairro: "Regomoleiro",
    cidade: "Natal",
    uf: "RN"
   };


function imprima(rua, numero, bairro, cidade, uf) {
    console.log('O usuário mora em', cidade, '/', uf, ', no bairro ',bairro, ', na rua ', rua,'com nº', numero);

}

imprima(endereco.rua, endereco.numero, endereco.bairro, endereco.cidade, endereco.uf);