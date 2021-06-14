import axios from 'axios';
// Funão delay aciona o .then após 1s
const delay = () => new Promise(resolve => setTimeout(resolve, 1000));

async function umPorSegundo() {
    await delay();
    console.log('1s');
    await delay();
    console.log('2s');
    await delay();
    console.log('3s');
}
umPorSegundo();


async function getUserFromGithub(user) {
    try {
        const response = await axios.get(`https://api.github.com/users/${user}`);
        console.log(response.data);
      } catch (error) {
        console.error(error);
      }
}
getUserFromGithub('thecogmel');
getUserFromGithub('diego3g');

class Github {
    static async getRepositories(repo) {
        try {
            const response = await axios.get(`https://api.github.com/repos/${repo}`) 
            console.log(response.data);
        } catch (error) {
            console.log('Repositório não existe');
        }
    }
}

document.getElementById('button').onclick = function () {
    Github.getRepositories('thecogmel/TADS');
    Github.getRepositories('rocketseat/dslkvmskv');

}