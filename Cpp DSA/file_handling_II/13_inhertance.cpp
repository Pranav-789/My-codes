// #include<iostream>
// using namespace std;

// class B{
//     int a;
//     public:
//     int b;

//     void set_ab(){
//         a = 10;
//         b = 20;
//     }

//     void print_a(){
//         cout << a << endl;
//     }
    
//     int get_a(){
//         return a;
//     }
// };

// class D: public B{
//     int c;
//     public:
//     void mul(){
//         c = b*get_a();
//     }
//     void print_c(){
//         cout << c << endl;
//     }
// };

// int main(){
//     D obj1;
//     obj1.set_ab();
//     obj1.mul();
//     obj1.print_c();
//     return 0;
// }

#include<iostream>
using namespace std;

class A{
    public:
    A(int x){
        cout <<"Hello A: " << x << endl;
    }
};

class B: public A{
    public:
    B(int y, int z):A(z){
        cout << "Hello B: " << y << endl;
    }
};

class C: public B{
    public:
    C(int x, int y, int z):B(y, z){
        cout << "Hello C: " << x << endl;
    }
};

int main(){
    C obj1(20,10, 15);
    return 0;
}