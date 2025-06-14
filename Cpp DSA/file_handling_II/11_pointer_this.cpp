#include<iostream>
using namespace std;

class A{
    public:
    int a;
    A(int a){
        this->a = a;
    }
    void display(){
        cout << "Value: " << this->a;
    }
};

int main(){
    A obj(10);
    obj.display();
    return 0;
}

