#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    int i,j;

    getline(cin,str);
    cin >> i;
    cin >> j;
    int dif = i-j; 
    if (dif < 0)
    {
        dif = dif*-1;
    }
    
    cout << dif << endl;
    string str2 = str.substr (i, dif);
    cout << str2 << endl;

    return 0;
}
