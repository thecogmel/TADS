#include <iostream>
using namespace std;

int km(int tabela[6][6], int rota[2][6])
{

    int linha, coluna, result = 0, l=0, c=0;

    for (coluna = 0; coluna < 6; coluna++) //for com valores invertidos para ler coluna/linha
    {   
        for (linha = 0; linha < 2; linha++)
        {
            if (coluna == 0)
            {
                l = c;
                c = rota[linha][coluna];
            }
            if (linha != 0 and coluna != 0)
            {
                l = c;
                c = rota[linha][coluna];
                result = result + tabela[l-1][c-1];
            }
        }
    }

    return result;
}
int main(int argc, char const *argv[])
{
    int l, c;
    int tabela[6][6] = {{0, 63, 210, 190, 0, 190},
                        {63, 0, 160, 150, 95, 0},
                        {210, 160, 0, 10, 0, 0},
                        {190, 150, 10, 0, 0, 0},
                        {0, 95, 0, 0, 0, 80},
                        {190, 0, 0, 0, 80, 0}};
    int rota[2][6] = {{1, 2, 3, 4, 5, 6},
                      {3, 4, 2, 5, 6, 1}};

    cout << km(tabela, rota) << endl;

    return 0;
}
