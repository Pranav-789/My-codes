//from p3 we are going to see modes of inheritance

#include<iostream>
using namespace std;

//here we are seeing public inhertance of public methods

class Base{
	private:
	int z;
	
	public:
	Base(int a){
		z = a;
	}
	
	int getPrivVAr(){
		return z;
	}
	
	void setPrivVal(int val){
		z = val;
	}
};

class Derived: public Base{
	public:
	Derived(int val) : Base(val){}
	
	void dispPrivVar(){
			cout << "Value of private member: " << getPrivVAr() << endl;
	}
	
	void modPriVAr(int p){
		setPrivVal(p);
	}
};

class C: protected Base{
	
};

class D: private Base{
	
};

int main(){
	Derived d1(10);
	
	d1.dispPrivVar();
	
	d1.modPriVAr(12);
	
	d1.dispPrivVar();
	return 0;
}
