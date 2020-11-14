#include <iostream>
using namespace std;

int time(int t1, int t2, int t3)
{
    int ouro, prata, bronze;

    // condicionais abaixo para saber qual o menor tempo
    // e associando as medalhas

    if (t1 < t2 && t2 < t3) //estrutura do if: se T1 fo menor que t2 e t2 menor que t3 assumimos qual é o menor; 
    {
        ouro = 1;
        prata = 2;
        bronze = 3;
    }
    if (t1 < t3 && t3 < t2)
    {
        ouro = 1;
        prata = 3;
        bronze = 2;
    }
    if (t2 < t1 && t1 < t3)
    {
        ouro = 2;
        prata = 1;
        bronze = 3;
    }
    if (t2 < t3 && t3 < t1)
    {
        ouro = 2;
        prata = 3;
        bronze = 1;
    }
    if (t3 < t1 && t1 < t2)
    {
        ouro = 3;
        prata = 1;
        bronze = 2;
    }
    if (t3 < t2 && t2 < t1)
    {
        ouro = 3;
        prata = 2;
        bronze = 1;
    }

    cout << ouro << endl;
    cout << prata << endl;
    cout << bronze << endl;


    return 0;
}

int main(int argc, char const *argv[])
{
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    if (t1 != t2) 
    {    
        if (t1 != t3)
        {
            if (t2 != t3)
            {
                if (1 <= t1 <= 1000 and 1 <= t2 <= 1000 and 1 <= t2 <= 1000 )
                {
                    time(t1, t2, t3);       
                }
            }   
        }
    }    
    return 0;
}