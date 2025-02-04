#include<iostream>
using namespace std;

int check_age(int age){
    

    cout <<  (age >= 18 ? "adult" : "kid") << "\n";
}


int main() {
    /*
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;

    if (age>=100)
    {
        std::cout<<"You are to old to enter this site" << "\n";
    }
    else if (age>=18)
    {
        std::cout<<"You are an adult"<<'\n';
        std::cout<<"Welcome to the site!"<<'\n';
    }
    else if(age < 0){
        std::cout<<"You are not born yet";
    }
    else{
        std::cout<<"you are not old enough to enter!";
    }*/
    
    check_age(19);
    check_age(17);

    return 0;
}