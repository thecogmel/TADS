class Admin {
    constructor () {
        this.admin = true;
    }
    isAdmin () {
        if (this.admin === true) {
            console.log(true);
            
        } else console.log(false);
        
    }
}

class Usuario extends Admin {
    constructor (email, senha) {
        super();
        this.email = email;
        this.senha = senha;
    }
    isAdmin () {
        if (Admin.admin === true) {
            console.log(true);
            
        } else console.log(false);
        
    }
}

const User1 = new Usuario('email@teste.com', 'senha123');
const Adm1 = new Admin('email@teste.com', 'senha123');

document.getElementById('button').onclick = function () {
    User1.isAdmin();
    Adm1.isAdmin();
}