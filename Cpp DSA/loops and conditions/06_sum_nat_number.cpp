#include<iostream>
using namespace std;

int main() {
   int sum = 0;
   int i = 1;

   int n;
   cout << "Enter n" << endl;
   cin>>n;

   while (i<=n)
   {
    sum = sum + i;
    i = i + 1;
   }

   cout << "The sum is: " << sum <<endl;
   

}