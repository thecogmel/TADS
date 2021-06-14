var btnElement = document.querySelector('#botao');

function getRandomColor() {
    var letters = "0123456789ABCDEF";
    var color = "#";
    for (var i = 0; i < 6; i++) {
    color += letters[Math.floor(Math.random() * 16)];
    }
    return color;
   }

   btnElement.onclick = function () {
       var quadradoElement = document.createElement('div');
       
       quadradoElement.style.width = '100px';
       quadradoElement.style.height = '100px';
       quadradoElement.style.backgroundColor = 'red'; 
       
       document.body.appendChild(quadradoElement);
       
       quadradoElement.onmouseover = function () {
        quadradoElement.style.backgroundColor = getRandomColor();
    }
    

    }