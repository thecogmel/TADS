#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    int n, A[MAX], B[MAX], C[MAX], D[MAX], j = 0; 
    cin >> n;
    int contador = 0;
    bool flagA = false, flagB = true, flagC= true;

    cout << "Digite matriz A: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    cout << "Digite matriz B: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    cout << "Digite matriz C: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> C[i];
    }
    
    for (int i = 0; i <= n; i++)
    {
        if (flagA == false)
        {
            D[contador] = A[i];
            if (i == n)
            {
                i = 0;
                flagA = true;
                flagB = false;
                flagC = true;
            }
            
        }
        if (flagB == false)
        {
            D[contador] = B[i];
            if (i == n)
            {
                i = 0;
                flagA = true;
                flagB = true;
                flagC = false;
            }
            
        }
        if (flagC == false)
        {
            D[contador] = C[i];
            if (i == n)
            {
                i = 0;
                flagA = true;
                flagB = true;
                flagC = true;
            }
            
        }
        contador++;
    }
    
    cout << "Vetor D = ";
    for (int i = 0; i < n*3; i++)
    {
        cout << D[i] << " ";
    }
    return 0;
}