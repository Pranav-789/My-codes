#include<bits/stdc++.h>
using namespace std;

void floyd_tngl(int depth){
	int cnt = 1;
	for(int i = 1; i <= depth; i++){
		for(int j = 0; j < i; j++){
			cout << cnt++ << " ";
		}
		cout << endl;
	}
}

void Hourglass(int depth){
	for(int i = depth; i >= 1; i--){
		//befor space
		for(int k = 0; k < depth - i; k++){
			cout << " ";
		}
		for(int j = 0; j < i; j++){
			cout << "* ";
		}
		cout << endl;
	}
	for(int i = 2; i <= depth; i++){
		for(int k = 0; k < depth - i; k++){
			cout << " ";
		}
		
		
		for(int j = 0; j < i; j++){
			cout << "* ";
		}
		cout << endl;
	}
}

void diamondpat(int depth){
	for(int i = 1; i <= depth; i++){
		for(int k = 0; k < depth - i; k++){
			cout << " ";
		}
		
		
		for(int j = 0; j < i; j++){
			cout << "* ";
		}
		cout << endl;
	}
	
	for(int i = depth-1; i >= 1; i--){
		//befor space
		for(int k = 0; k < depth - i; k++){
			cout << " ";
		}
		for(int j = 0; j < i; j++){
			cout << "* ";
		}
		cout << endl;
	}
}

void butterflypat(int depth){
	int levels = 2* depth - 1;
	// toward linear
	int k = levels/2 + 1;
	for(int i = 0; i < levels/2; i++){
		for(int j = 0; j <= i; j++){
			cout << "* ";
		}
		for(int u = 0; u <= k+1; u++){
			cout << "  "; 
		}
		k = k - 2;
		for(int j = 0; j <= i; j++){
			cout << "* ";
		}
		cout << endl;
	}
	//linear
	for(int i = 0; i < levels; i++){
		cout << "* ";
	}
	cout << endl;
	int k1 = 1;
	for(int i = 0; i < levels/2; i++){
		for(int j = levels/2 - 1 - i; j >= 0; j--){
			cout << "* ";
		}
		for(int u = 0; u < k1; u++){
			cout << "  ";
		}
		k1 = k1 + 2;
		for(int j = levels/2 - 1 - i; j >= 0; j--){
			cout << "* ";
		}
		cout << endl;
	}
}

class printPattern{
	int choice;
	int depth;
	public:
		void menu(){
			cout << "_____MENU_____" << endl;
			cout << "1. Floyd's Triangle" << endl;
			cout << "2. Houglass Pattern." << endl;
			cout << "3. Butterfly Pattern." << endl;
			cout << "4. Diamond Pattern." << endl;
			cout << "Enter Choice: ";
			cin >> choice;
			cout << "Enter depth of pattern: ";
			cin >> depth;
			
			switch(choice){
				case 1:
				floyd_tngl(depth);
				break;
				
				case 2:
				Hourglass(depth);
				break;
				
				case 3:
				butterflypat(depth);
				break;
				
				case 4:
				diamondpat(depth);
				break;
				
			}
		}
};

int main(){
	printPattern p1;
	p1.menu();
	return 0;
}
