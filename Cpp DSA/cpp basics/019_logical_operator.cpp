#include<iostream>

int main() {
    int temp;
    bool sunny = true;

    std::cout<<"Enter the temp: ";
    std::cin>>temp;

    if(temp <= 0 || temp >= 30) 
    {
        std::cout<<"The temp is bad\n";
    }
    else{
        std::cout<<"the temp is good\n";
    }

    if(sunny == true){
        std::cout<<"It is sunny outside";
    }

    else{
        std::cout<<"It is cloudy outside";
    }

    return 0;
}