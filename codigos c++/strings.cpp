#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str1 = "Erick";
    string str2 = "Medeiros";
    string str3 = "";
    getline(cin,str1); //pega a string da linha 
    cout << str1 << endl;
    cout << str1.length() << endl;
    cout << str2.length() << endl;
    cout << endl;
    cout << str1.compare(str2) << endl;
    
    return 0;
}
