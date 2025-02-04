#include<iostream>
using namespace std;

int main(){
    char arr[9]= {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"  ";
        if (i+1 % 3 == 0)
        {
            cout<<endl;
            cout << endl;
        }
    }
    
    int turn = 0;
    for (int j = 0; j < 9; j++)
    {
        if (turn%2==0)
        {
            cout << "Player 1 choose position ";
            int pos;
            cin>>pos;
            arr[j] = 'X';
        }
        else{
            cout << "Player 2 choose position ";
            int pos;
            cin>>pos;
            arr[j] = 'O';
        }

        
    }
    

    
}