#include<bits/stdc++.h>
using namespace std;

class Hero{
private:
int health;

public:
    char *name;
    char level;
    static int timetocomplete; //not depends on hero or enemy
    //In such case static keyword which belongs to class not to the object
    //they do not have this keyword                                                

    Hero(){
        cout << "Simple constructor called!" << endl;
        name = new char[100];
    }

    //Parametrised Constructor
    Hero(int health){
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level; // this -> level is rep object level;
        this -> health = health;
    }

    //Copy constructer
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called!"<< endl;
        this->health = temp.health;
        this->level = temp.level; 
    }

    void print(){
        cout << endl;
        cout << "[ Name " << this->name << " ,";
        cout << "health " << this -> health << " ,";
        cout << "level " << this -> level << " ]";
        cout << endl << endl;
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

    void setname(char name[]){
        strcpy(this->name, name);
    }

    ~Hero(){
        cout << "Destructor Called!" << endl;
    }

};

int Hero::timetocomplete = 5;

int main(){
    Hero a; // a destructor is automatically created, no input parameter and return type
    cout << Hero::timetocomplete << endl;
    Hero *b = new Hero;
    //simple constructor is called twice
    //destructor is called once as static object automatically therefore for dynamically a manually call a destructor for dyn
    b->timetocomplete = 10;
    cout << b->timetocomplete << endl;
    cout << Hero::timetocomplete << endl;
    delete b;
    return 0;
}