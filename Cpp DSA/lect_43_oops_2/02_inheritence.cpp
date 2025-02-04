#include<bits/stdc++.h>
using namespace std;

class Human{ //Parent class
    private:
    int factor; // private member can't be accessed by any modifier

    public:
    int height;
    int weight;
    int age;

    int getage(){
        return this -> age;
    }
    int setweight(int w){
        this->weight = w;
    }
};

class male: private Human{
    public:
    string color;

    void sleep(){
        cout << "Male sleeping" << endl;
    }

    int getHeight(){
        return this->height;
    }
};



int main(){
    male object1;
    cout << object1.getHeight()<< endl;
    // cout << object1.weight << endl;
    // cout << object1.height << endl;

    // cout << object1.color << endl;
    // object1.setweight(84);
    // cout << object1.weight << endl;
    // object1.sleep();
    return 0;
}