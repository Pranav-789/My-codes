#include<iostream>
using namespace std;

class Solution{
public:
	void maxelement(int n){
			int max = -1;
			for(int i = 0; i < n; i++){
					int temp;
					cout << "Enter element " << i+1 << ": ";
					cin >>  temp;
					if(temp > max){
						max = temp;
					}
			}
			cout << "The largest element is " << max << endl;
	}
};

int main(){
	int n;
	cout << "Enter the number of elements to be entered: ";
	cin >> n;
	Solution obj;
	obj.maxelement(n);
	return 0;
}
