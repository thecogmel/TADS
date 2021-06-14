#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#define MAX 100

struct Produto
{
    string nome;
    string categoria;
    int id;
    int valor;
};

Produto Cadastrar(Produto itens[MAX], int id)
{
    setbuf(stdin, NULL);
    
    cout << "Digite o nome do produto: " << endl;
    getline(cin,itens[id].nome);
    cout << "digite ao valor do produto: " << endl;
    cin >> itens[id].valor;
    cout << "Digite o id do produto: " << endl;
    cin >> itens[id].id;
    id++;

    return itens[MAX];
}

void ListarProdutos() {
    
    
    
}

int main(int argc, char const *argv[])
{
    int opcao, id = 0;
    Produto itens[MAX];
    do
    {
        system("clear");
        cout << "\n\n\t\tBem Vindo ao programa CRUD" << endl;

        cout << "\n        MENU" << endl;
        cout << "1 - Registrar produto" << endl;
        cout << "2 - Listar produtos" << endl;
        cout << "3 - Sair" << endl;

        cout << "Digite uma opção:      ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            Cadastrar(itens, id);
            break;
        case 2:
            ListarProdutos();
            system("clear");
            break;
        case 3:
            cout << "\n\nFinalizando..." << endl;
            system("clear");
            exit(0);
            break;

        default:
            system("clear");
            cout << "\n\nOpcao invalida! Tente Novamente!\n\n";
        }
    } while (opcao != 3 || opcao > 3);

    return 0;
}