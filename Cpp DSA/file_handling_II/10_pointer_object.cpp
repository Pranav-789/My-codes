#include<iostream>
using namespace std;

class item{
    int code;
    float price;

    public:
    void getdata(int a, float b){
        code = a;
        price = b;
    }

    void show(){
        cout << code << endl;
        cout << price << endl;
    }
};

int main(){
    item x;
    item* ptr =&x;
    ptr->getdata(100, 75.50);
    ptr->show();
    return 0;
}