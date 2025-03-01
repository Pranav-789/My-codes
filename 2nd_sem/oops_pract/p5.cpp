//Single Inheritance
#include<iostream>
using namespace std;

class vehicle{
	public:
	vehicle(){
		cout << "This is a vehicle." << endl;
	}
};

class car: public vehicle{
	public:
	car(){
		cout << "This vehicle is a car." << endl;
	}
};

//class C: public A, public C{};

int main(){
	car obj1;
	return 0;
}

// Base -> Derived
