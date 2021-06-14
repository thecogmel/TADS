#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    float a[MAX], media, abaixo[MAX], acima[MAX];
    int n, cont1=0, cont2=0, soma=0;
    cout << "Digite a quantidade de alunos: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        soma = soma + a[i];
    }
    media = soma/n;
    for(int i=0; i<n; i++)
    {
        if(a[i]<media)
        {
            abaixo[cont1]=a[i];
            cont1++;
        } else
        {
            acima[cont2]=a[i];
            cont2++;
        }
    }
    cout << "A Média é " << media << endl;
    
    cout << "Estaturas abaixo da media: "; 
    for(int i=0; i<cont1; i++)
    {
        cout << abaixo[i] << " ";
    }
    cout << endl;

    cout << "Estaturas acima da media: "; 
    for(int i=0; i<cont2; i++)
    {
        cout << acima[i] << " ";
    }
    cout << endl;
    
    return 0;
}