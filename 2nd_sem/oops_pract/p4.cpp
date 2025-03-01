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
	
	friend class Derived;
};

class Derived{
	public:
	void displatPriv(Base& obj){
		cout << "The Private var of Base class: " << obj.z << endl;
	}
	
	void modifyPri(Base& obj, int p){
		obj.z = p;
	}
};

class C: protected Base{
	
};

class D: private Base{
	
};

int main(){
	Base obj1(10);
	
	Derived d1Obj;
	
	d1Obj.displatPriv(obj1);
	
	d1Obj.modifyPri(obj1, 18);
	
	d1Obj.displatPriv(obj1);
	return 0;
}
