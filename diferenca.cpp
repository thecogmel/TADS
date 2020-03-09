#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main (){

    int x, y, z;

    cout << "coloque o valor de X" << endl;
    cin >> x;
    cout << "coloque o valor de y" << endl;
    cin >> y;
    
    if (x > y)
    {
        z = x - y;
        cout << "O valor da diferença é: " << z << endl;

    } else
    {
        z = y - x;
        cout << "O valor da diferença é: " << z << endl;
    }
    
    

    return 0;
}