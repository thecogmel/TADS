#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str = "Erick";
    getline(cin,str); //pega a string da linha 
    cout << str << endl;
    cout << str.size();

    return 0;
}
