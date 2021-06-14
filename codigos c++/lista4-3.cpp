#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    string result;
    string alf = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    getline(cin, input);
    for (int i = 0; i < input.length(); i++)
    {
        for (int j = 0; j < alf.length(); j++)
        {
            if (alf[j] == input[i])
            {
                result[i] = alf[j + 3];
                cout << result[i];
                if ("Z" == input)
                {
                    cout << "a";
                }
            }
        }
    }
   return 0;
}