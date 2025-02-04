#include<iostream>
using namespace std;

int main(){
    int n;
    int k;
    cin>> n >> k;
    int score[n] = {0};
    int count = 0;

    for(int i = 0; i < n; i++){
        cin>>score[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(score[i] >= score[k-1] && score[1] >= 0)
        count++;
    }
    
    cout << count<<endl;
    return 0;
}