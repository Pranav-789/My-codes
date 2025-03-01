#include<iostream>
using namespace std;

class Solution{
public: 
		void Solve(int num){
			int sum_opos = 0, sum_epos = 0, sum_eve = 0, sum_odd = 0;
			int count = 1;
			while(num != 0){
					int r = num%10;
					if(count %2 == 0){
							sum_epos += r;
					}
					else{
							sum_opos += r;
					}
					
					if(r%2==0){
							sum_eve += r;
					}
					else{
							sum_odd += r;
					}
					
					num = num/10;
					count++;
			}
			cout << "Sum of even position: " << sum_epos << endl;
			cout << "Sum of odd position: " << sum_opos << endl;
			cout << "Sum of odd digits: " << sum_odd << endl;
			cout << "Sum of even digits: " << sum_eve << endl;
		}
};

int numgen(int u){
		int p = 1;
		for(int i = 1; i < u; i++){
			p *= 10;
		}
		return p;
}

int main(){
	int num;
	int u;
	cout << "Enter the number of digits the number is: ";
	cin >> u;
	int x = numgen(u);
	
	read:
	cout << "Enter the number: ";
	cin >> num;
	if(!(num/x > 0 && num / x < 10)){
			cout << "Enter " << u << " digits number." << endl;
			goto read;
	}
	
	Solution obj;
	obj.Solve(num);
	return 0;
}


