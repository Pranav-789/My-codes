#include<iostream>
using namespace std;

class clock24{
	private:
	int hrs;
	int mins;
	
	public:
	
	void get_hrs(int h){
		hrs = h;
	}
	void get_mins(int m){
		mins = m;
	}
	
	void display(){
		cout << "The Time is: " << hrs <<  ":" <<  mins <<  " " << endl;
	}
	
	void tf2ot(){
		cout << "Is it 1. moring or 2.past afternoon: " << endl;
		int t;
		cin >> t;
		if(t == 2){
			hrs = hrs%12 + 12;
		}
	} 
};

class clock12{
	private:
	int hrs;
	int mins;
	
	public:
	
	void get_hrs(int h){
		hrs = h;
	}
	void get_mins(int m){
		mins = m;
	}
	
	void display(){
		cout << "The Time is: " << hrs <<  ":" <<  mins <<  " " << endl;
	}
	
	void ot2tf(){
		cout << "Is it 1. moring or 2.past afternoon: " << endl;
		int t;
		cin >> t;
		if(t == 2){
			hrs += 12;
		}
	} 
};

void menu(){
	cout << "Welcome to World Clocks!" << endl;
	
	cout << "Choose the standard of time: "<< endl;
	cout << "1. 12 Hours"<< endl;
	cout << "2. 24 Hours"<< endl;
	int std;
	cin >> std;
	
	switch(std){
		case 1:
		clock12 c1;
		cout << "Enter time: "<< endl;
		int h;
		cout << "Enter hours: ";
		cin >> h;
		c1.get_hrs(h);
		
		int m;
		cout << "Enter minutes: ";
		cin >> m;
		c1.get_mins(m);
		
		cout << "Press 1 to conert time to 24H standard "<< endl;
		cout << "Press 2 to display time" << endl;
		int choice;
		cin >> choice;
		
		switch(choice){
			case 1:
			c1.ot2tf();
			c1.display();
			break;
			
			case 2:
			c1.display();
			break;
			
			default:
			cout << "invalid Input!" << endl;
		}
		break;
		
		case 2:
		clock24 c2;
		cout << "Enter time: "<< endl;
		int hr;
		cout << "Enter hours: ";
		cin >> hr;
		c2.get_hrs(hr);
		
		int m2;
		cout << "Enter minutes: ";
		cin >> m2;
		c2.get_mins(m2);
		
		cout << "Press 1 to conert time to 24H standard "<< endl;
		cout << "Press 2 to display time" << endl;
		int choice2;
		cin >> choice2;
		
		switch(choice2){
			case 1:
			c2.tf2ot();
			c2.display();
			break;
			
			case 2:
			c2.display();
			break;
			
			default:
			cout << "invalid Input!" << endl;
		}
		break;
		
		default:
		cout << "invalid Input!" << endl;
	}
}

int main(){
	menu();
	return 0;
}
