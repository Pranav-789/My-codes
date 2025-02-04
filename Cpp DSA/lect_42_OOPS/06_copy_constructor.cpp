#include<bits/stdc++.h>
using namespace std;

class Hero{
private:
int health;

public:
    char *name;
    char level;

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

};

int main(){
    
    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7] = "Pranav";
    hero1.setname(name);

    //hero1.print();
    //use default copy constructor
    Hero hero2(hero1);
    // hero2.print();

    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();

    hero1 = hero2;
    hero1.print();
    hero2.print();


    //The change applied in hero1 is also applied in  


    // Hero suresh(70, 'C');
    // suresh.print();

    // Hero R(suresh);
    // // R.health = suresh.health;
    // // R.level = suresh.level;
    // R.print();

    return 0;
}