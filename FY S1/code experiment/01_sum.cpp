#include<iostream>

 int sum(int x, int y){
    std::cout<<x+y;
 }

int main() {
    int x, y;
    std::cin>>x>>y;

    sum(x, y);

}