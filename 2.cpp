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
    
    float prueba;
    prueba = catetoop* catetoop + catetoad*catetoad;
    float c2 = hipo*hipo;
    if( c2= prueba ){
      std::cout <<" Si es un triangulo recto con lados: " << hipo << catetoop<< catetoad << std::endl;
    }

    return 0;
    
}