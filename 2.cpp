#include <iostream>
#include <cmath>

int main(void){
    float catetoop;
    std::cout<<"Diga el valor del posible cateto opuesto"<< std::endl;
    std::cin>>catetoop;
    std::cout<<"Valor del posible cateto opuesto"<< " " <<catetoop<< std::endl;
    
    float catetoad;
    std::cout<<"Diga el valor del posible cateto adyacente"<< std::endl;
    std::cin>>catetoad;
    std::cout<<"Valor del posible cateto adyacente"<< " " <<catetoad<< std::endl;
    
    float hipo;
    std::cout<<"Diga el valor de la posible hipotenusa"<< std::endl;
    std::cin>>hipo;
    std::cout<<"Valor de la posible hipotenusa"<< " " <<hipo<< std::endl;
    
    int prueba = hipo*hipo;
    int opera = catetoop* catetoop + catetoad*catetoad;
    
    if( opera == prueba ){
      std::cout <<" Si es un triangulo recto con lados: " << catetoop<<", "<< catetoad <<", "<< hipo << std::endl;
    }
    
    else{
    std::cout <<"No es un triangulo recto"<< std::endl;
    }
    
    return 0;
    
}