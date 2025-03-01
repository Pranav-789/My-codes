#include<iostream>
using namespace std;

void billing(){
	string s;
	cout << "Enter the name: " << endl;
	cin >> s;
	
	
	int units;
	
	cout << "Enter the number of units used: "<<endl; 
	cin >> units;
	
	int bill = 0;
	
	if(units < 100){
		bill = 60 * units;
		bill = bill /100;
	}
	else if(units >= 100 && units <= 300){
		bill = (80 * (units-100)) + (60 * 100);
		bill = bill /100;
	}
	else if(units > 300){
		bill = (80 * 200) + (60 *100) + (90 * (units - 300));
		bill = bill /100;
	}
	if(bill < 50){
		bill = 50;
	}
	if(bill > 300){
		bill = bill + (0.15*bill);
		
	}
	
	cout << s << " "<< ":" << " " << bill << endl;
	return;
}

int main(){

	int n;
	
	cout << "Enter the number of consumers: ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		billing();
	}
	return 0;
}
