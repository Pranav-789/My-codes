#include<iostream>
using namespace std;

class A{
    public:
    void sayhello(){
        cout << "Hello Pranav" << endl;
    }
    void sayhello(string name){
        cout << "Hello " << name << endl;
    }
};

int main(){
    A obj;
    obj.sayhello();
    obj.sayhello("Babbar");
    return 0;
}