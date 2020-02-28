#include <iostream>

int main (){
    
    int C,P,F, result;

    //std::cout << "C: ";
    std::cin >> C;
    //std::cout << "P: ";
    std::cin >> P;
    //std::cout << "F: ";
    std::cin >> F;


       if (1 <= C <= 1000 && 1 <= P <= 1000 && 1 <= F <= 1000)
    {
        result = (P/C);
        //std::cout << "result = " << result << "\n";
        if (F > result)
        {
            std::cout << "N";
        } else
        {
            std::cout << "S";
        }          
    }   else
    {
        std::cout << "entrada invalida";
    }
    
}