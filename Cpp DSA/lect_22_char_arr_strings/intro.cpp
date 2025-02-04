#include<iostream>
using namespace std;

int strlen(char arr[]){
    int count = 0;
    while(arr[count] != '\0'){
        count++;
    }

    return count;
}

void strrev(char arr[]){
    int s = 0, e = strlen(arr) -1;  
    while(s < e){
        swap(arr[s++], arr[e--]);
    }

}

int main() {
    char name[20];

    cout<<"Enter your name: "<<endl;
    cin>>name;
    

    cout<<"Your name is ";
    cout<< name<<endl;

    cout<<"The length of string is "<<strlen(name)<<endl;

    strrev(name);

    cout<<"Your name is ";
    cout<< name<<endl;

    return 0;

}