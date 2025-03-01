#include<iostream>
using namespace std;

class member{
	private:
	int age;
	string type;
	int timeper;
	int sess;
	int mem_cost;
	
	public:
	void set_age(int d){
		age = d;
	}
	
	void set_type(int c){
		if(c==1){
			type = "Membership";
		}
		else{
			type = "Sessions";
		}
	}
	
	void set_timeper(int t){
		timeper = t;
	}
	
	void set_sess(int s){
		sess = s;
	}
	
	void set_mcost(int mc){
		mem_cost = mc;
	}
	
	void disp_cst(){
		cout << "The membership cost of this member is: " << mem_cost << endl;
	}
};

int costcalc(int type, int data, int num, int tper, int cost1, int cost2){
	int mc;
	switch(type){
		case 1:
		if(data > 60){
			if(tper < 12){
				mc = cost1 * 0.70 * tper;
			}
			else{
				mc = cost1 * 0.70 * 0.85 * tper;
			}
		}
		else{
			if(tper >= 12){
				mc = cost1 * 0.85 * tper;
			}
		}
		break;
		
		case 2:
		if(num >= 5){
		mc = (5 * cost2 * 0.8) + ((num - 5) * cost2);
		}
		else{
			mc = (num * cost2 * 0.8);
		}
		break;
		
		default:
		cout << "Invalid Input!, Try again." << endl;
	}
	return mc;
}

member MENU(int cost1,int cost2){
	member m1;
	cout << "Welcome to ITP Fitness Centre!" << endl;
	
	cout<< "Offers From Club: " << endl;
	cout << "1. Senior citizen(Age > 60) Get 30% off on their Membership."<< endl;
	cout << "2. For memberships Get 15% off on Membership for 12 months or more."<< endl;
	cout << "3.Get 20% off on 5 Personal Training Sessions."<< endl;
	
	int data;
	cout << "Enter age of member: ";
	cin >> data;
	m1.set_age(data);
	
	int type;
	cout << "Select Membership type: "<< endl;
	cout << "1. Membership" << endl;
	cout << "2. Sessions: ";
	cin >> type;
	m1.set_type(type);
	
	int tper;
	cout << "Enter the time period: ";
	cin >> tper;
	m1.set_timeper(tper);
	
	int num;
	cout << "Enter number of training sessions: ";
	cin >> num;
	m1.set_sess(num);
	cout << endl;
	
	int x = costcalc(type, data, num, tper, cost1, cost2);
	m1.set_mcost(x);
	return m1;
}



int main(){
	int cost1 = 1500; //monthly cost
	int cost2 = 300; // session cost
	
	int n;
	cout << "Enter the number of members: ";
	cin >> n;
	
	member m[n];
	
	for(int i = 0; i < n; i++){
		m[i] = MENU(cost1, cost2);
		m[i].disp_cst();
	}
	return 0;
}
