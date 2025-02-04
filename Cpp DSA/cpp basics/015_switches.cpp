#include<iostream>

int main() {
    int month;
    std::cout<<"Enter the month (1-12): ";
    std::cin>>month;

    switch(month){
        case 1: 
        std::cout<<"It is January";
        break;

        case 2:
        std::cout<<"It is february";
        break;

        case 3:
        std::cout<<"It is march";
        break;
        
        case 4:
        std::cout<<"It is April";
        break;

        case 5:
        std::cout<<"It is may";
        break;

        case 6:
        std::cout<<"It is june";
        break;

        case 7:
        std::cout<<"It is july";
        break;

        case 8:
        std::cout<<"It is august";
        break;

        case 9:
        std::cout<<"It is september";
        break;

        case 10:
        std::cout<<"It is october";
        break;

        case 11:
        std::cout<<"It is November";
        break;

        case 12:
        std::cout<<"It is December";
        break;

        default:
        std::cout<<"Please enter number between 1 to 12 please";
    }

    return 0;
}