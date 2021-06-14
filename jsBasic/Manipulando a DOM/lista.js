var nomes = ["Diego", "Gabriel", "Lucas"];

var inputElement = document.querySelector('#lista input');
var buttonElement = document.querySelector('#lista button');

function adicionar() {
    var inputValue = inputElement.value;
    nomes.push(inputValue);
    inputElement.value = '';
    var deleteElement = document.querySelector('#lista ul');
    deleteElement.innerHTML = '';    

    for (let i = 0; i < nomes.length; i++) {
        
        var listElement = document.querySelector('#lista ul');
        var liElement = document.createElement('li');
        var textElement = document.createTextNode(nomes[i]);
        
        liElement.appendChild(textElement);
        listElement.appendChild(liElement);


    }
}

