#include<iostream>
using namespace std;

struct vec{
		int i;
		int j;
};

class Solution{
public:
		void sum_comp(vec v1, vec v2, vec& res){
			res.i = v1.i + v2.i;
			res.j = v2.i + v2.j;
		}
};

int main(){
	struct vec num1, num2, res;
	
	cout << "Enter real part of num1: ";
	cin >> num1.i;
	
	cout << "Enter imaginary part of num1: ";
	cin >> num1.j;
	
	cout << "Enter real part of num2: ";
	cin >> num2.i;
	
	cout << "Enter imaginary part of num2: ";
	cin >> num2.j;
	
	res.i = 0;
	res.j = 0;
	
	Solution obj;
	obj.sum_comp(num1, num2, res);
	
	cout << "The sum of num1 and num2 is: " << res.i << " + i" << res.j << endl;
	return 0;
}
