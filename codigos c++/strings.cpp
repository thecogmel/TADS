#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str = "Erick";
    getline(cin,str); //pega a string da linha 
    cout << str << endl;
    cout << str.size() << endl;
    cout << argc << endl; //argc diz o número de argumentos
    //arg v diz quais parametros são
    return 0;
}
