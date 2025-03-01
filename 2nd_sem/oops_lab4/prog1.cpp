#include<iostream>
#include<math.h>
using namespace std;

class quadratic_eq{
private:
	int tdc;
	int odc;
	int zdc;
	
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
	
	void setzdc(int c){
		zdc = c;
	}
	int getzdc(){
		return zdc;
	}
	
	void Solve(int a, int b, int c){
		int num1 = -b;
		int num2 = sqrt((b*b) - 4*a*c);
		int den = 2*a;
		
		int root1 = (num1 - num2)/den;
		cout << "Root 1 : " << root1 << endl;
		int root2 = (num1 + num2)/den;
		cout << "Root 2 : " << root2 << endl;
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
	q1.setzdc(c);
	
	q1.Solve(q1.gettdc(), q1.getodc(), q1.getzdc());
	return 0;
}
