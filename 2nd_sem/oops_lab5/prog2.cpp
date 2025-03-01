#include<iostream>
using namespace std;

class dayType{
	private:
	int d;
	string arr[7] = {"Mon", "Tue", "Wed", "Thurs", "Fri", "Sat", "Sun"};
	string day = arr[d-1]; 
	
	public:
		dayType(int d){
			this->d = d-1;
		}
	
		void setday(int a){
				this->d = a-1;
				this->day = arr[a-1];
		}
		void printday(){
			cout << "The day you entered: " <<arr[d]<< endl;
		}
		void whday(){
			cout << "Today's day: " <<arr[d] << endl;
		}
		void nxday(){
				cout << "Next day: " <<arr[d+1] << endl;
		}
		
		void prday(){
			cout << "Previous day: " <<arr[d-1] << endl;
		}
		void xday(int x, int n){
			int y = x;
			x= (n + x)% 7;
			cout << "The day after "<< y << " days will be: "<<arr[x] << endl;
		}
};

int main(){
	int n;
	cout << "Set the day: ";
	cin >> n;
	//d1.setday(n);
	dayType *d1 = new dayType(n);
	d1->printday();
	d1->whday();
	d1->nxday();
	d1->prday();
	
	cout << "After x days what day will it be?" << endl;
	cout << "Enter x" << endl;
	int x;
	cin >> x;
	d1->xday(x, n-1);

	return 0;
}

