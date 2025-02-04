#include <iostream>

int main()
{
    int rows;
    int columns;
    char symbol;

    std::cout<<"How many rows?: ";
    std::cin>>rows;

    std::cout<<"How many columns?: ";
    std::cin>>columns;

    std::cout<<"Enter a symbol to use: ";
    std::cin>>symbol;

    for (int j = 1; j <= rows; j++)
    {
        for (int i = 1; i <= columns; i++)
        {
            std::cout << symbol;
        }
        std::cout<<'\n';
    }
    return 0;
}