#include<bits/stdc++.h>
#include<time.h>
using namespace std;

class lottery{
	int picker[5];
	
	int user_pick[5];
	friend void compareH(lottery L1);
	friend void compareE(lottery L1);
	
	public:
	void pickfiller(){
		for(int i = 0; i < 5; i++){
			read:
			picker[i] = rand() % 9 + 1;
			int flag = 0;
			for(int j = 0; j < i; j++){
				if(picker[i] == picker[j]){
					flag = 1;
					break;
				}
			}
			if(flag){
				goto read;
			}
		}
		for(int i = 0; i < 5; i++){
				cout << picker[i] << "\t";
			}
		cout << endl;
	}
	
	void userIp(){
		cout << "Enter distinct numbers between 1 to 9: "<< endl;
		for(int i = 0; i < 5; i++){
			cout << "num " << i << ": ";
			cin >> user_pick[i];
		}
	}
	
};

void compareH(lottery L1){
	bool flag = true;
	
	for(int i = 0; i < 5; i++){
		if(L1.picker[i] != L1.user_pick[i]){
			flag = false;
			break;
		}
	}
	if(flag == false){
		for(int i = 0; i < 5; i++){
			cout << L1.picker[i] << "\t";
		}
		cout << endl;
		cout << "You lost the Hard Round. Better luck Next Time ! :(" << endl;
	}
	else{
			cout << "Congrats! You won the hard round :)." << endl;
	}
}

void compareE(lottery L1){
	bool flag = true;
	sort(L1.picker, L1.picker + 5);
	sort(L1.user_pick, L1.user_pick + 5);
	for(int i = 0; i < 5; i++){
		if(L1.picker[i] != L1.user_pick[i]){
			flag = false;
			break;
		}
	}
	if(flag == false){
		for(int i = 0; i < 5; i++){
			cout << L1.picker[i] << "\t";
		}
		cout << endl;
		cout << "You lost the Easy Round. Better luck Next Time ! :(" << endl;
	}
	else{
			cout << "Congrats! You won the easy round :)." << endl;
	}
}

int main(){
	
	lottery L1;
	
	L1.pickfiller();
	L1.userIp();
	compareH(L1);
	compareE(L1);

	return 0;
}
