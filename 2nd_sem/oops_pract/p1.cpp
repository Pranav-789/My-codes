#include<bits/stdc++.h>
using namespace std;

class Parent{
	public:
	int b;
	
	void set_ab(){
		cout << "Enter ID: ";
		cin >> b;
	}
	
	void print_id(){
		cout << "Parent ID: " << b << endl;
	}
	
	int get_pid(){
		return b;
	}
};

class Child: public Parent{
	public:
	int id_c;
	void printID(){
		cout << "Child ID: " << id_c<< endl;
	}
};

int main(){
	Child obj1;
	obj1.set_ab();
	obj1.print_id();
	
	obj1.id_c = 90;
	obj1.printID();
	return 0;
}
