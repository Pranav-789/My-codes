#include <iostream>
using namespace std;

int main()
{
    cout << "Hello Pranav\n welcome to divicompare" << endl;

    /* int a = 2/5;
    int b = 3/5 */

    /* float a = 2 / 5; // also 0
    float b = 3 / 5; */

    float c;
    cout << "enter divisor: "; 
    cin>>c;

    float d1;
    cout << "enter dividend1: "; 
    cin>>d1;

    float d2;
    cout << "enter dividend2: "; 
    cin>>d2;

    float a = d1 / c; 
    float b = d2 / c;

    cout << "d1/c: " << a << endl; // 0
   cout << "d2/c: " << b << endl; // 0

    bool yn (a==b);

    // cout<< yn << endl; // 0 means false and 1 means true

    if (yn = 0)
    {
        cout << "not equal";
    }
    else{
        cout<< "equal";
    }

    // note: output of int x int will always be int

    return 0;
}