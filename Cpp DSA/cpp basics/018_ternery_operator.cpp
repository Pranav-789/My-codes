#include<iostream>

int main() {

    //ternery operator is used as a replacement for if else;
    // it works for two conditions only

    // condition ? exp1 : exp2;

//code 1
    //int grade = 75;

    // if(grade>=60){
    //     std::cout<<"You Pass!";
    // }
    // else{
    //     std::cout<<"Better luck next time";
    // }

    //grade>=60 ? std::cout<<"You Pass!" : std::cout<<"Better luck next time";

//code 2
    // int number = 9;

    // number%2==0 ? std::cout<<"It's even" : std::cout<<"It's odd";

// code 3

    bool hungry = false;

   // hungry ? std::cout<<"You are hungry" : std::cout<<"You are full";
   std::cout<< (hungry ? "You are hungry" : "You are full");

   return 0;

}