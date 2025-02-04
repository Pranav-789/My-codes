#include<iostream>

int main() {

    std ::string name;
    int age;

    std::cout << "What's your full name?: ";
    // std::cin >>name;
    // we cannot add spaces in string through cin
    std::getline(std::cin >>std::ws, name); // ws is used to remove any possible whitespace and newline character

    std::cout<< "What's your age?: ";
    std::cin >> age;

    std:: cout<< "Hello " << name << '\n';
    std:: cout<< "you are " << age << " years old";
    return 0;
}