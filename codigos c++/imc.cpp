#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main () {
    int imc, kg, h;

    cout << "Digite a altura:" << endl;
    cin >> h;
    cout << "Digite o peso:" << endl;
    cin >> kg;

    imc = kg/pow(h,2);

    if (imc >= 25)
    {
        cout << "Sobrepeso" << endl; 
    }else if ((18.5 > imc) and (imc < 25))
    {
        cout << "Peso ideal" << endl;
    } else if (imc <= 18.5)
    {
        cout << "Abaixo do peso" << endl; 
    }   

    return 0;
}