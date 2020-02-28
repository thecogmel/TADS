#include <iostream>

int main (){
    
    int C,P,F, result;

    //std::cout << "C: ";
    std::cin >> C;
    //std::cout << "P: ";
    std::cin >> P;
    //std::cout << "F: ";
    std::cin >> F;


       if (1 <= C and C <= 1000 and 1 <= P and P <= 1000 and 1 <= F and F <= 1000)
    {
        result = (P/C);
        //std::cout << "result = " << result << "\n";
        if (F > result)
        {
            std::cout << "N\n";
        } else
        {
            std::cout << "S\n";
        }          
    }   else
    {
        std::cout << "Entrada inválida\n";
    }
    
}