#include<iostream>
using namespace std;

class hero
{
private:
    int health;

public:
    char level;

    char getlevel(){
        return level;
    }

    void setlevel(char ch){
        level = ch;
    }

    int gethealth(){
        return health; // as private can't be accessed out of class, we are amking getter and setter to access it.
    }

    void sethealth(int h){
        health = h;
    }
};


int main(){
    hero h1;
    h1.level = 'A';
    h1.sethealth(70);

    cout << "Health: " << h1.gethealth() << endl;
    cout << "level: " << h1.getlevel() << endl;

    hero *h2 = new hero;
    h2->setlevel('A');
    h2->sethealth(90);

    cout << "Health: " << (*h2).gethealth() << endl;
    cout << "level: " << (*h2).getlevel() << endl;

    cout << "Health: " << h2 -> gethealth() << endl;
    cout << "level: " << h2 -> getlevel() << endl;
    return 0;
}