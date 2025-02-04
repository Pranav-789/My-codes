#include<iostream>
using namespace std;

class person{
private:
    string name;
    int age;
    string country;

public:
    int getage(){
        return age;
    }

    void setage(int a){
        age = a;
    }

    void setname(string s){
        name = s;
    }

    string getname(){
        return name;
    }

    void setcoutry(string s2){
        country = s2;
    }

    string getcountry(){
        return country;
    }
};

int main(){
    person p1;
    int age;
    cout << "Enter age: ";
    cin >> age;
    p1.setage(age);

    string namep;
    cout << "Enter name: ";
    cin >> namep;
    p1.setname(namep);

    string count;
    cout << "Enter country: ";
    cin >> count;
    p1.setcoutry(count);

    cout << "The person P1 named " << p1.getname() << " is " << p1.getage() << " years old and belongs to " << p1.getcountry() << endl;

    return 0;
}