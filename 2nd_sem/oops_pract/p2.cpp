#include<iostream>
using namespace std;

//accessing the inherted members of base class in derived class

class Base{
	public:
	int public_var;
	
	void display(){
		cout << "Public var: " << public_var << endl;
	}
	
};

class Derived:public Base{
	public:
	void displayMember(){
		display();
	}
	void mod_mem(int mv){
		public_var = mv;
	}
};

int main(){
	Derived d1;
	d1.mod_mem(96);
	d1.displayMember();
	return 0;
}
