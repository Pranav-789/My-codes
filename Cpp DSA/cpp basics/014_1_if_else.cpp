#include<iostream>

int main() {
    
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;

    if (age>=100)
    {
        std::cout<<"You are to old to enter this site" << "\n";
    }
    else if (age>=18 && age<100)
    {
        std::cout<<"You are an adult"<<'\n';
        std::cout<<"Welcome to the site!"<<'\n';
    }
    else if(age < 0){
        std::cout<<"You are not born yet";
    }
    else{
        std::cout<<"you are not old enough to enter!";
    }
    
    return 0;
}