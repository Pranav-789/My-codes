#include<iostream>
using namespace std;

int main(){
    int arr[5][5];
    int ans;

    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] != 0){
                int h = 2 - i;
                if(h < 0){
                    h = -h;
                }
                int v = 2 - j;
                if(v < 0){
                    v = -v;
                }
                ans = v + h;
            }
        }   
    }

    cout << ans << endl;

    return 0;
}