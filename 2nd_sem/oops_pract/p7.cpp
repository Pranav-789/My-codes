//Multi-level Inheritance
#include<iostream>
using namespace std;

class vehicle{
	public:
	vehicle(){
		cout << "This is a vehicle." << endl;
	}
};

class FourWheeler: public vehicle{
	public:
	FourWheeler(){
		cout << "This is 4 wheeler." << endl;
	}
};

class car: public FourWheeler{
	public:
	car(){
		cout << "This Fourwheeler vehicle is a car." << endl;
	}
};

int main(){
	car obj1;
	return 0;
}

//Base -> class A -> classB -> ......
