#include <iostream>
using namespace std;

int time(int t1, int t2, int t3)
{
    int atleta1, atleta2, atleta3;

    // condicionais abaixo para saber qual o menor tempo
    // e associando as medalhas

    if (t1 < t2 && t2 < t3) //estrutura do if: se T1 fo menor que t2 e t2 menor que t3 assumimos qual é o menor; 
    {
        atleta1 = 1;
        atleta2 = 2;
        atleta3 = 3;
    }
    if (t1 < t3 && t3 < t2)
    {
        atleta1 = 1;
        atleta2 = 3;
        atleta3 = 2;
    }
    if (t2 < t1 && t1 < t3)
    {
        atleta1 = 2;
        atleta2 = 1;
        atleta3 = 3;
    }
    if (t2 < t3 && t3 < t1)
    {
        atleta1 = 2;
        atleta2 = 3;
        atleta3 = 1;
    }
    if (t3 < t1 && t1 < t2)
    {
        atleta1 = 3;
        atleta2 = 1;
        atleta3 = 2;
    }
    if (t3 < t2 && t2 < t1)
    {
        atleta1 = 3;
        atleta2 = 2;
        atleta3 = 1;
    }

    cout << atleta1 << endl;
    cout << atleta2 << endl;
    cout << atleta3 << endl;


    return 0;
}

int main(int argc, char const *argv[])
{
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    //add restrições
    if (t1 != t2 and t1 != t3 and t2 != t3)
    {
       if (1 <= t1 <= 1000 and 1 <= t2 <= 1000 and 1 <= t2 <= 1000 )
        {
            time(t1, t2, t3);       
        } 
    }             
    return 0;
}