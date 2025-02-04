#include<bits/stdc++.h>
using namespace std;

void update(int **p2){
    **p2 = **p2 + 1;

}

int main(){

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    //cout << endl << *p << " " << **p2 << endl;

    cout << i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    update(p2);

    cout << i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    
}