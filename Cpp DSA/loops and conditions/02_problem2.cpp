#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a: ";
    cin >> a;
    //  a = cin.get(); // cin does not read \n and \t or space

    int b;
    cout << "enter b: ";
    cin >> b;

    cout << "The value of a and b is " << a << " " << b << endl;

    if (a > b)
    {
        cout << "A is greater" << endl;
    }
    if (b > a)
    {
        cout << "B is greater" << endl;
    }
    else
    {
        cout << "Both are equal" << endl;
    }

    return 0;
    
}