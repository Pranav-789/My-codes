#include<iostream>

int main() {

    char grade;

    std::cout<<"What letter grade: ";
    std::cin>>grade;

    switch(grade){
        case 'A':
        std::cout<<"You did great";
        break;

        case 'B':
        std::cout<<"Too Average";
        break;

        case 'C':
        std::cout<<"Can't eat dinner";
        break;

        case 'D':
        std::cout<<"Don't show your face";
        break;

        case 'E':
        std::cout<<"Go find a new home";
        break;
    }

    return 0;
}