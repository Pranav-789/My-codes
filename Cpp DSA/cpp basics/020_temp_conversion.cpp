#include<iostream>

int main() {

    double temp;
// 1.8 * C + 32 = F, then (F - 32)/1.8 = C
    char unit;

    std::cout<<"********** Temperature Conversion **********\n";    

    std::cout<<"F = Farenheit\n";
    std::cout<<"C = celsius\n";
    std::cout<<"What unit would you like to convert?: ";
    std::cin>>unit;

    std::cout<<"Enter temp: ";
    std::cin>>temp;

    if(unit=='C' || unit=='c'){
        std::cout<<"The temp is: "<< (9/5)*temp + 32<<" deg fahrenheit\n";
    }
    else if(unit == 'F' || unit=='f'){
        std::cout<<"The temp is: "<< (temp - 32)/1.8 <<" deg Celsius\n";
    }

    std::cout<<"**************************************************";

    return 0;
}