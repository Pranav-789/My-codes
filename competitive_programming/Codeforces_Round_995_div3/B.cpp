#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int arr[3] = {a, b, c};
        int cyclesum = a + b + c;

        int fullcycle = n / cyclesum;
        int count = fullcycle * 3;
        
        int remaining = n % cyclesum;

        for(int i = 0; remaining > 0; i++){
            remaining -= arr[i%3];
            count++;
        }
        cout << count << endl;

    }
    return 0;
}