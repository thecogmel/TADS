#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num[10];
    int result = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int x = 0; x < 10; x++)
        {
            if (num[x] > num [i])
            {
                result = num[x];
                num[x] = num[i];
                num[i] = result;
            } 
        }
    }
        cout << "O número ordenado é:\t";

    for (int j = 0; j < 10; j++)
    {
        cout << num[j] << " ";
    }
    cout << endl;
    
    return 0;
}