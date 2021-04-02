#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <fstream>

using namespace std;

void menuprincipal(int *varMenu);

int main()
{
    ofstream fout;

    /////////////////////// Estruturas e chamadas de função
    struct EstruturaCadastro
    {
        int idFuncionario;
        char nomeFuncionario[60];
        char sobrNomeFuncionario[60];
        char setorFuncionario[30];
    };
    struct EstruturaSetor
    {
        char varSetores[30];
    };

    /////////////////////// Declaração de variaveis
    bool varValido;
    char salvaNome[60], nomeBusca[60], salvasobre[60];
    int opcaoMenu, i, alteraExclui, salvaSetor; //Controle de opções do menu.
    EstruturaCadastro CadastroNome[30];
    EstruturaSetor CadastroSetor[30];
    opcaoMenu = 0, i = 0, varValido = false;
    //////////////// Cadastro de setores
    strcpy(CadastroSetor[0].varSetores, "Atendimento");
    strcpy(CadastroSetor[1].varSetores, "Gerencia");
    strcpy(CadastroSetor[2].varSetores, "Suporte Tecnico");
    strcpy(CadastroSetor[3].varSetores, "Financeiro");
    strcpy(CadastroSetor[4].varSetores, "Vendas");
    ////////////////Apenas para alimentar o sistema
    strcpy(CadastroNome[0].nomeFuncionario, "Erick");
    strcpy(CadastroNome[0].sobrNomeFuncionario, "Medeiros");
    strcpy(CadastroNome[0].setorFuncionario, CadastroSetor[2].varSetores);
    strcpy(CadastroNome[1].nomeFuncionario, "Jhonny");
    strcpy(CadastroNome[1].sobrNomeFuncionario, "Adam");
    strcpy(CadastroNome[1].setorFuncionario, CadastroSetor[2].varSetores);
    strcpy(CadastroNome[2].nomeFuncionario, "Matheus");
    strcpy(CadastroNome[2].sobrNomeFuncionario, "Arroz");
    strcpy(CadastroNome[2].setorFuncionario, CadastroSetor[0].varSetores);
    strcpy(CadastroNome[3].nomeFuncionario, "Higor");
    strcpy(CadastroNome[3].sobrNomeFuncionario, "Leandro");
    strcpy(CadastroNome[3].setorFuncionario, CadastroSetor[3].varSetores);
    strcpy(CadastroNome[4].nomeFuncionario, "Rafael");
    strcpy(CadastroNome[4].sobrNomeFuncionario, "Lima");
    strcpy(CadastroNome[4].setorFuncionario, CadastroSetor[4].varSetores);
    strcpy(CadastroNome[5].nomeFuncionario, "Cesar");
    strcpy(CadastroNome[5].sobrNomeFuncionario, "Filho");
    strcpy(CadastroNome[5].setorFuncionario, CadastroSetor[3].varSetores);
    strcpy(CadastroNome[6].nomeFuncionario, "Daniela");
    strcpy(CadastroNome[6].sobrNomeFuncionario, "Ferraz");
    strcpy(CadastroNome[6].setorFuncionario, CadastroSetor[1].varSetores);
    strcpy(CadastroNome[7].nomeFuncionario, "Luciana");
    strcpy(CadastroNome[7].sobrNomeFuncionario, "Fernandes");
    strcpy(CadastroNome[7].setorFuncionario, CadastroSetor[4].varSetores);
    strcpy(CadastroNome[8].nomeFuncionario, "Adam");
    strcpy(CadastroNome[8].sobrNomeFuncionario, "Smith");
    strcpy(CadastroNome[8].setorFuncionario, CadastroSetor[3].varSetores);
    strcpy(CadastroNome[9].nomeFuncionario, "Victor");
    strcpy(CadastroNome[9].sobrNomeFuncionario, "Fernandes");
    strcpy(CadastroNome[9].setorFuncionario, CadastroSetor[4].varSetores);
    for (i = 0; i <= 9; i++)
    {
        CadastroNome[i].idFuncionario = i + 01;
    }
    ////////////////////////////////////////////////////////////
    do
    { // Laço do menu principal

        menuprincipal(&opcaoMenu);

        switch (opcaoMenu)
        {
        case 1: //Cadastro de funcionário
            cout << "Vamos cadastrar o funcionario!\n";
            cout << "Insira o nome do funcionario:\n";
            cin.get(salvaNome, 60);
            cin.ignore();
            cout << "Insira o sobrenome do funcionario\n";
            cin.get(salvasobre, 60);
            cin.ignore();
            cout << "Insira o setor do funcionario:\n";
            cout << "0 - Atendimento , 1 - Financeiro , 2 - Gerencia , 3 - Suporte Tecnico\n";
            cin >> salvaSetor;
            cin.ignore();

            for (i = 0; i <= 9; i++)
            {
                if (strcmp(CadastroNome[i].nomeFuncionario, "NULL") == 0)
                {
                    strcpy(CadastroNome[i].nomeFuncionario, salvaNome);
                    strcpy(CadastroNome[i].sobrNomeFuncionario, salvasobre);
                    strcpy(CadastroNome[i].setorFuncionario, CadastroSetor[salvaSetor].varSetores);
                    cout << "Funcionario cadastrado com sucesso!!\n"
                         << endl;
                }
            }
            if (varValido == false)
            {
                cout << "\nTodos os espacos preenchidos, exclua algum funcionario.\n";
            }
            break;
        case 2: //Busca - Altera - EXCLUI
            varValido = false;
            cout << "Digite um parametro para busca.\n";
            cin.get(nomeBusca, 60);
            for (i = 0; i <= 9; i++)
            {
                if ((strcmp(CadastroNome[i].nomeFuncionario, nomeBusca) == 0) || (strcmp(CadastroNome[i].sobrNomeFuncionario, nomeBusca) == 0))
                {
                    cout << "ID " << CadastroNome[i].idFuncionario;
                    cout << " Nome: " << CadastroNome[i].nomeFuncionario;
                    cout << " " << CadastroNome[i].sobrNomeFuncionario;
                    cout << " - Setor: " << CadastroNome[i].setorFuncionario << endl;
                    varValido = true;
                }
            }
            cout << varValido;
            if (varValido == 1)
            { //Altera exclui case2
                bool varAlteraExclui = false;
                cout << "\nQual id deseja alterar?\n";
                cin >> i;
                cout << "Deseja alterar ou excluir? " << CadastroNome[i - 1].nomeFuncionario << " " << CadastroNome[i - 1].sobrNomeFuncionario;
                cout << "\n0 - Excluir  /  1 - Alterar\n";
                cin >> varAlteraExclui;
                cin.ignore();
                if (varAlteraExclui == 0)
                {
                    strcpy(CadastroNome[i - 1].nomeFuncionario, "NULL");
                    strcpy(CadastroNome[i - 1].sobrNomeFuncionario, "NULL");
                    strcpy(CadastroNome[i - 1].setorFuncionario, "NULL");
                    cout << "Entrada excluida com sucesso!\n";
                }
                if (varAlteraExclui == 1)
                {
                    cout << "Insira o nome do funcionario:\n";
                    cin.get(CadastroNome[i - 1].nomeFuncionario, 60);
                    cin.ignore();
                    cout << "Insira o sobrenome do funcionario\n";
                    cin.get(CadastroNome[i - 1].sobrNomeFuncionario, 60);
                    cin.ignore();
                    cout << "Insira o setor do funcionario:\n";
                    cout << "0 - Atendimento , 1 - Financeiro , 2 - Gerencia , 3 - Suporte Tecnico\n";
                    cin >> salvaSetor;
                    cin.ignore();
                    strcpy(CadastroNome[i].setorFuncionario, CadastroSetor[salvaSetor].varSetores);
                    cout << "Funcionario alterado com sucesso!\n";
                }
            }
            if (varValido == 0)
            {
                cout << "A Busca nao retornou resultados. Tente parametros diferentes.\n";
                break;
            case 3: //Altera - Exclui
                bool varAlteraExclui = false;
                cout << "\nQual id deseja alterar?\n";
                cin >> i;
                cout << "Deseja alterar ou excluir? " << CadastroNome[i - 1].nomeFuncionario << " " << CadastroNome[i - 1].sobrNomeFuncionario;
                cout << "\n0 - Excluir  /  1 - Alterar\n";
                cin >> varAlteraExclui;
                cin.ignore();
                if (varAlteraExclui == 0)
                {
                    strcpy(CadastroNome[i - 1].nomeFuncionario, "NULL");
                    strcpy(CadastroNome[i - 1].sobrNomeFuncionario, "NULL");
                    strcpy(CadastroNome[i - 1].setorFuncionario, "NULL");
                    cout << "Entrada excluida com sucesso!\n";
                }
                if (varAlteraExclui == 1)
                {
                    cout << "Insira o nome do funcionario:\n";
                    cin.get(CadastroNome[i - 1].nomeFuncionario, 60);
                    cin.ignore();
                    cout << "Insira o sobrenome do funcionario\n";
                    cin.get(CadastroNome[i - 1].sobrNomeFuncionario, 60);
                    cin.ignore();
                    cout << "Insira o setor do funcionario:\n";
                    cout << "0 - Atendimento , 1 - Financeiro , 2 - Gerencia , 3 - Suporte Tecnico\n";
                    cin >> salvaSetor;
                    cin.ignore();
                    strcpy(CadastroNome[i].setorFuncionario, CadastroSetor[salvaSetor].varSetores);
                    cout << "Funcionario alterado com sucesso!\n";
                }
            }
            break;
        case 4: //Busca de todos os usuários
            cout << "Abaixo estao todos os funcionarios cadastrados.\n";
            for (i = 0; i <= 9; i++)
            {
                cout << "ID " << CadastroNome[i].idFuncionario << " - Nome: ";
                cout << CadastroNome[i].nomeFuncionario << " ";
                cout << CadastroNome[i].sobrNomeFuncionario << " - Setor: " << CadastroNome[i].setorFuncionario << endl;
            }
            cout << "Um total de: " << i << " funcionarios cadastrados.\n";
            break;
        case 5: //exclui o registro de todos os funcionarios
            cout << "Excluindo todas as entradas\n";
            for (i = 0; i <= 9; i++)
            {
                strcpy(CadastroNome[i].nomeFuncionario, "NULL");
                strcpy(CadastroNome[i].sobrNomeFuncionario, "NULL");
                strcpy(CadastroNome[i].setorFuncionario, "NULL");
            }
            cout << "TODAS AS ENTRADAS APAGADAS COM SUCESSO!\n";
            break;
        case 6: //Exibir todos os setores cadastrados
            for (i = 0; i <= 4; i++)
            {
                cout << CadastroSetor[i].varSetores << "\n";
            }
            cout << "Um total de: " << i << " setores cadastrados.\n";
            break;
        case 7: //Exportar casos para TXT
            system("rm ./exporta.txt");

            fout.open("exporta.txt", ios_base::app);

            for (i = 0; i <= 9; i++)
            {
                fout << "ID " << CadastroNome[i].idFuncionario << " - Nome: ";
                fout << CadastroNome[i].nomeFuncionario << " ";
                fout << CadastroNome[i].sobrNomeFuncionario << " - Setor: " << CadastroNome[i].setorFuncionario << endl;
            }

            for (i = 0; i < 5; i++)
            {
                fout << endl
                     << endl;
                fout << "Setor " << i << ":   " << CadastroSetor[i].varSetores << endl;
            }

            fout.close();

            break;
        default:
            cout << "Saindo do sistema!\n";
            exit(0);
        }
    } while (opcaoMenu <= 8);
}
/////////////// funções ///////////////
void menuprincipal(int *varMenu)
{
    cout << "=== !Bem vindo ao controle de Funcionarios e Setores! ===\n";
    cout << "          Insira a operacao que deseja realizar!\n";
    cout << "1 - Cadastro de funcionario\n2 - Busca de funcionario \n";
    cout << "3 - Altera - Exclui Funcionario \n4 - Exibir todos os Funcionarios \n5 - Exclusao de todos os funcionarios.\n";
    cout << "6 - Exibir Setores \n";
    cout << "7 - Exportar para arquivo externo \n8- SAIR DO SISTEMA.\n";
    cin >> *varMenu;
    cin.ignore();
}

///////////////////////////////////////
