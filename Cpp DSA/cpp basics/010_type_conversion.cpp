#include <iostream>

int main()
{

    // double x = 3.14;
    double x = (int)3.14;
    std::cout << x << std::endl;

    // char y = 100;
    // std::cout << y<<'\n';
    //or
    // std::cout<<(char) 100;

    int correct = 8;
    int questions = 10;

    double score = correct/(double)questions *100; // we cant get a result with int/int division
    // therefore we casted questions into correct

    std::cout << score << "%";

    return 0;
}