//program to convert digit to binary
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int ans = 0;
    int place = 1;

    while(n != 0){
        int digit = n%2;
        
        ans = ans + digit*place;
        n = n/2;
        place = place * 10;
    }

    cout<<ans<<endl;
}