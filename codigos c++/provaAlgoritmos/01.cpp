#include <iostream>
using namespace std;

int idade (int M, int A, int B){

    int result, C, aux;
     
    aux = A + B;
    C = M - aux; //diferença descobre a idade do irmão C

    //if's comparam e vê qual é o maior
    if (A > B && A > C)
    {
        return A;
    }
   
    if (B > A && B > C)
    {
        return B;
    }
      
    if (C > B && C > A)
    {
        return C;
    }

    return 0;  
}
int main(int argc, char const *argv[])
{
    int M, A, B;
    cin >> M >> A >> B;

    cout << idade(M, A, B);

    return 0;
}
