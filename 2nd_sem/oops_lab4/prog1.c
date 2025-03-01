#include<iostream>
#include<math.h>
using namespace std;

class quadratic_eq{
private:
	int tdc;
	int odc;
	int 0dc;
	
	void Solve(int a, int b, int c){
		vector<int> ans;
		int num1 = -b;
		int num2 = sqrt((b*b) - 4*a*c);
		int den = 2*a;
		
		int root1 = (num1 - num2)/den;
		cout << "Root 1 : " << root1 << endl;
		int root2 = (num1 + num2)/den;
		cout << "Root 2 : " << root2 << endl;
		
	}
	
public: 
	void settdc(int a){
		tdc = a;
	}
	int gettdc(){
		return tdc;
	}
	
	void setodc(int b){
		odc = b;
	}
	int getodc(){
		return odc;
	}
	
	void set0dc(int c){
		0dc = c;
	}
	int get0dc(){
		return 0dc;
	}
};


int main(){
	quadratic_eq q1;
	int a;
	cout << "Enter the coefficient of x^2 : ";
	cin >> a;
	q1.settdc(a);
	
	int b;
	cout << "Enter the coefficient of x : ";
	cin >> b;
	q1.setodc(b);
	
	int c;
	cout << "Enter the constant : ";
	cin >> c;
	q1.set0dc(c);
	
	Solve(q1.gettdc(), q1.getodc(), q1.get0dc());
	return 0;
}
