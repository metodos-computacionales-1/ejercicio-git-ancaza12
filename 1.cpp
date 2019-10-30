#include <iostream>
#include <cmath>

int main(void){
    float N;
    std::cout<<"Diga el valor del radio"<< std::endl;
    std::cin>>N;

    std::cout<<"Valor del radio"<< " " <<N<< std::endl;
    std::cout<<"Valor del perimetro"<< " " <<2*M_PI*N<< std::endl;
    std::cout<<"Valor del area"<< " " << M_PI* N*N << std::endl;
    
    return 0;
}