#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int num[n];
    int result = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < n; x++)
        {
            if (num[x] < num [i])
            {
                result = num[x];
                num[x] = num[i];
                num[i] = result;
            } 
        }
    }
        cout << "O número ordenado é:  ";

    for (int j = 0; j < n; j++)
    {
        cout << num[j] << " ";
    }
    cout << endl;
    
    return 0;
}