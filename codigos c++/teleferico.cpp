#include <iostream>
#include <math.h>

int main (){
    int C, A, result;

    std::cin >> C;
    std::cin >> A;

    if (2<=C and C <=100 and 1<=A and A <= 1000)
    {
        result = (A/C)+1;
        round(result);
    }

    if (result == 2)
    {
        result++;
    }

    std::cout << result;
}