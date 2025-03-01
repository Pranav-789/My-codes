#include<iostream>
#include<map>
using namespace std;


class time{
	int hrs;
	int mins;
	public:
	
	void reader(){
		cout << "Enter time in hrs <space> mins 24std format: ";
		cin >> hrs >> mins;
		
		if(hrs == 0 && mins == 0){
			cout << "Midnight" << endl;
		}
		if(hrs == 12 && mins == 0){
			cout << "Noon" << endl;
		}
	}
}

int main(){
	
	return 0;
}
