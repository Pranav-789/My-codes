#include<iostream>
using namespace std;

int main(){
    // char str[] = "Hello World";
    // char* cp = str;
    // cout << str << endl;
    // cout << cp;


    char *vehicle[]={"CAR", "VAN", "CYCLE", "TRUCK", "BUS"};
    for(int i=0; i<5;i++)
    cout<<vehicle[i]<<endl;
    return 0;
}