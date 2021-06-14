#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main (){

    int x;
    cout << "coloque o valor de X" << endl;
    cin >> x;
    if (x < 0)
    {
        x = x - (2*x);
        cout << "O valor absoluto de X é: " << x << endl;

    } else
    {
        cout << "O valor absoluto de X é: " << x << endl;
    }
    
    return 0;
}