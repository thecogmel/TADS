#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    int n, A[MAX], B[MAX],C[MAX], num, j=0, x=0, y = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        if(num%2==0){
            A[x]=num;
            x++;
        }
        else
        {
            B[y]=num;
            y++;
        }
    }
    for(int i=0; i<x; i++)
    {
        C[j]= A[i];
        j++;
    }
    for(int i=0; i<y; i++)
    {
        C[j]=B[i];
        j++;
    }
    cout << "matriz C = " << endl;
    for(int i=0; i<j; i++)
    {
        cout << C[i] << endl;
    }
    return 0;
}