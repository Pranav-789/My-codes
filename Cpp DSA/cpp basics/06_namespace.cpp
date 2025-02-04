#include<iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 4;
}

int main() {
    using std::cout;

    int x = 5;
    // int x = 10; // if not use namespace you cannot change value of x 

    cout<<x<<'\n'; // if not defined precedence will always be given to local variable

    cout <<first::x<<'\n'; //:: is scope resolution operator

    cout <<second::x<<'\n';
    return 0;
}