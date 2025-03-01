#include<iostream>
using namespace std;

void metconv(int choice, float& n){
	switch(choice){
			case 1:
			n = n * 0.0254;
			break;
			
			case 2:
			n = n * 0.001;
			break;
			
			case 3:
			n = n * 0.01;
			break;
			
			case 4:
			n = n * 1000;
			break;
			
			case 5:
			n = n * 0.3048;
			break;
			
			case 6:
			n = n * 0.9144;
			break;
			
			case 7:
			n = n * 1609.34;
			break;
			
			case 8:
			n = n;
			break;
			
			default:
			cout << "Invalid inputs" << endl;
		}
}

void unitconv(int c2, float n){
	switch(c2){
			case 1: 
			n = n * 39.37;
			cout << "The unit in inches is " << n << endl;
			break;
			
			case 2: 
			n = n * 1000;
			cout << "The unit in mm is " << n << endl;
			break;
			
			case 3: 
			n = n * 100;
			cout << "The unit in cm is " << n << endl;
			break;
			
			case 4: 
			n = n * 0.001;
			cout << "The unit in km is " << n << endl;
			break;
			
			case 5: 
			n = n * 3.28;
			cout << "The unit in feet is " << n << endl;
			break;
			
			case 6: 
			n = n * 1.09361;
			cout << "The unit in yards is " << n << endl;
			break;
			
			case 7: 
			n = n * 0.000621371;
			cout << "The unit in miles is " << n << endl;
			break;
			
			case 8:
			n = n;
			cout << "The unit in meters is " << n << endl;
			break;
			
			default:
			cout << "Invalid inputs" << endl;
		}
}

int main(){
	char ch;
	
	do{
		float n;
		int choice;
		cout << "Choose unit to be entered" << endl;
		cout << "1. inches, 2. mm, 3. cm, 4. km, 5. feet, 6. yards, 7. miles, 8. meters: ";
		cin >> choice;
		cout << "Enter the number: ";
		cin >> n;
		
		metconv(choice, n);
		
		int c2;
		cout << "Choose unit to be converted in" << endl;
		cout << "1. inches, 2. mm, 3. cm, 4. km, 5. feet, 6. yards, 7. miles, 8. meters: ";
		cin >> c2;
		
		unitconv(c2, n);
		
		cout << endl;
		
		cout << "If you want to continue press Y, or press any key to exit" << endl;
		
		cin >> ch; 
		
	}while(ch == 'y' || ch == 'Y');
	
	cout << "Thank you!"<< endl;
	
	return 0;
}
