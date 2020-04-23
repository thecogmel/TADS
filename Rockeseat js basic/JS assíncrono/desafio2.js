var inputElement = document.querySelector('#app input');
var buttonElement = document.querySelector('#app button');

async function buscaRepo() {

    var inputValue = inputElement.value;
    var urlFinal = 'https://api.github.com/users/' + inputValue + '/repos';

    axios.get(urlFinal)
        .then(function (response) {
            var resultado = response.data;

            var deleteElement = document.querySelector('#app ul');
            deleteElement.innerHTML = '';

            for (let i = 0; i < resultado.length; i++) {

                var listElement = document.querySelector('#app ul');
                var liElement = document.createElement('li');
                var textElement = document.createTextNode(resultado[i].name);

                liElement.appendChild(textElement);
                listElement.appendChild(liElement);


            }


        })
        .catch(function (error) {
            alert("Usuario não encontrado");
        })

    inputElement.value = '';
}

buttonElement.onclick = buscaRepo;
