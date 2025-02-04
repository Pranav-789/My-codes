#include<iostream>
using namespace std;

void update(int n){
    n++;
}

void update1(int& n){
    n++;
}

//another way

int& update3(int n){ // Bad practice
    int num = n;
    int& ans = num;
    return ans;
}
// After the function is called the num and ans vanishes
// as they are the local variable of the function block;
// Hence returning them won't be give output, it'll throw a warning

int* fun(int n){ // Same as above 
    int* ptr = &n;
    return ptr;
}

int main(){


    // int i = 5;

    // int& j = i;

    // cout << i << endl;
    // i++;

    // cout << i << endl;
    // j++;

    // cout << i << endl;

    int n = 5;

    cout << "Before " << n << endl;
    // update(n); // this create a copy which will take memory, does not apply to actual variable;
    update1(n); // this is pass by reference, where new memory is not created and work is actually done
    cout << "After " << n << endl;
    fun(n);
    return 0;
}