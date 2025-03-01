#include<iostream>
#include<string>
using namespace std;

int main(){
    string name = "Raj";
    int arr[] = {1, 2, 3, 4, 5};
    for(auto ch:name){
        cout<< ch << endl;
    }

    for(auto num:arr){
        cout << num << endl;
    }
    
}