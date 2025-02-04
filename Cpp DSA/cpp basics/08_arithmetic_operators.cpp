#include<iostream>

int main () {
    int student = 21;
    
    //student = student +2;
    //student+=2;//same as above

    //student++;
    //student-=2;
    //student--;

    //student = student * 2;
    //student*=2;

    //student = student/2;
    //student/=2;

    student/=3; // it will give 6 as it does not hold decimal portion, as we defined it as int above;

    int remainder = student%2;

    std::cout<< student <<'\n';
    std::cout<< remainder <<'\n';

    return 0;
}