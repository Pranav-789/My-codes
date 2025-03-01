//Multiple Inheritance
#include<iostream>
using namespace std;

class vehicle{
	public:
	vehicle(){
		cout << "This is a vehicle." << endl;
	}
};

class FourWheeler{
	public:
	FourWheeler(){
		cout << "This is 4 wheeler." << endl;
	}
};

class car: public vehicle, public FourWheeler{
	public:
	car(){
		cout << "This Fourwheeler vehicle is a car." << endl;
	}
};

int main(){
	car obj1;
	return 0;
}

// Base1 & Base2 & ..... BaseN -> derived
