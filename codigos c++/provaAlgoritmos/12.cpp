#include <iostream>
using namespace std;

int trapezio(int B, int b)
{
    int difB, difb, base = 160;
    float area1, area2;
    //B = base maior, b = base menor

    //área da diferença para ser comparada a área colocada
    difB = base - B;
    difb = base - b;

    area1 = 70*(B+b)/2;
    area2 = 70*(difB+difb)/2;
    
    
    //comparativo entre as áreas
    if (area1 > area2)
    {
        cout << 1;
    }
    else if (area2 > area1)
    {
        cout << 2;
    }
    else
    {
        cout << 0;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    //área do trapézio = h.(B+b)/2
    // base = 160 e altura 70
    int B, T;

    cin >> B;
    cin >> T;

    if (0 < B && 160 > B)
    {
        if (0 < T and 160 > T)
        {
            trapezio(B, T);
        }
    }

    return 0;
}
