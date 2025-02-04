#include<bits/stdc++.h>
using namespace std;

class Hero{
private:
int health;

public:
    char level;

    // Hero(){
    //     cout << "Constructor Called!" << endl;
    // }

    //Parametrised Constructor
    Hero(int health){
        cout << "this ->" << this << endl;
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level; // this -> level is rep object level;
        this -> health = health;
    }

    void print(){
        cout << level << endl;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

};

int main(){
    cout << "Hi" << endl;
    //object created statically
    Hero ramesh(10);
    //cout << "Address of ramesh: "<< &ramesh << endl;
    ramesh.print();

    Hero *h = new Hero(10); 
    h->print();
    Hero temp(22, 'B');
    temp.print();

    return 0;
}