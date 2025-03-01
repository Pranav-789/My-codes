#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter a number n: "<< endl;
	cin >> n; 
	int cpy = n;
	bool flag = false;
	
	for(int i = 2; i < n; i++){
		if(n%i==0){
			flag = true;
			break;
		}
	}
	if(flag){
		cout << "The number " << n << " is not a prime number" << endl;
	}
	else{
		cout << "The number " << n << " is a prime number" << endl;
	}
	
	int factorial = 1;
	
	while(n!=0){
		factorial *= n;
		n--;
	}
	
	cout << "The factorial of " << cpy << " is " << factorial << endl;
	return 0;
}
