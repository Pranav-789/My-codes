#include<iostream>

int main() {
    // break: break out of a loop
    //continue: skip current itteration

    for(int i = 1; i <= 20; i++) {
        // if(i==13){
        //     break; // breaks before 13th itteration
        // }
        if(i==13){
            continue; //13th itteration skipped
        }
        std::cout<<i <<'\n';
    }
}