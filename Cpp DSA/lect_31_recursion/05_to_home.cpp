#include<bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest){
    cout << " source " << src << " destination " << dest << endl;
    if(src == dest){
        cout << "Destination has arrived" << endl;
        return;
    }

    src++;
    reachHome(src, dest);
}

int main(){
    reachHome(1, 9);
    return 0;
}