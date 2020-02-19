#include <iostream>

int main (){
    //comentário de linha

    /* comentário
    de
    bloco*/

    int N, Z; //N: pen, Z: cash, Y: change
    float Y; // float is used for real numbers
    float custoCaneta;

    //READ and Write
    std::cout << "N: ";
    std::cout << "Z: ";
    std::cout << "Y: ";
    std::cin >> N >> Z >> Y;

    //TEST
    if (Z>0 and N>0 and Z>Y and Y>=0) {
        custoCaneta = (Z-Y)/N;
        std::cout << "Custo da Caneta:" << custoCaneta;
    } else std::cout << "algum valor invalido";

    
    

}