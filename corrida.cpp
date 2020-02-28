#include <iostream>

int main (){
    int C, N, result;

    std::cin >> C;
    std::cin >> N;

    if (1<= C and C <= 10^8 and 1 <= N and N <= 100)
    {
        result = C % N;
        std::cout << result;
    }
}