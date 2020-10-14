#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int tamanhoVetor, k = 0;
    cin >> tamanhoVetor;
    int a[tamanhoVetor];
    int b[tamanhoVetor];
    
    for (int i = 0; i < tamanhoVetor; i++)
    {
        cin >> a[i];
    }
    for (int i = tamanhoVetor-1; i >= 0; i--)
    {
        b[k] = a[i];
        k++;
    }
    for (int i = 0; i < tamanhoVetor; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    
    return 0;
}
