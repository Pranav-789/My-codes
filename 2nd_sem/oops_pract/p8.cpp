//Hierarchial Inheritance
//family tree type
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
		cout << "This vehicle is a car." << endl;
	}
};

class Bus: public vehicle, public FourWheeler{
	public:
	Bus(){
		cout << "This vehicle is a Bus." << endl;
	}
};

class Bike: public vehicle{
	public:
	Bike(){
		cout << "This vehicle is a Bike." << endl;
	}
};


int main(){
	car obj1;
	cout << endl;
	Bus obj2;
	cout << endl;
	Bike onj3;
	return 0;
}

//baap -> n bete -> har bete ke x bache -> and so on
