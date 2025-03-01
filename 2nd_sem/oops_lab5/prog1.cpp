#include<iostream>
using namespace std;

class atbs{
		private:
		string seats[14][7];
		
		public:
		
		void assign(){
			seats[0][0] = "     ";
			for(int i = 1; i < 7; i++){
			seats[0][i] = 'A' - 1 + i;
			}	
		
			for(int j = 1; j < 14; j++){
					seats[j][0] = "Row";
			}
			
			for(int j = 1; j< 14; j++){
				for(int i = 1; i < 7; i++){
					seats[j][i] = ".";
				}
			}
		}
		
		void display(){
			for(int i = 0; i < 14; i++){
				if(i == 1){
					cout << "________First Class_______"<<endl;
				}
				if(i == 3){
					cout << "________Business Class_______"<<endl;
				}
				if(i == 8){
					cout << "________Economy Class_______"<<endl;
				}
				
					for(int j = 0; j < 7; j++){
						if(j == 1 && i!= 0){
							cout << i << " ";
						}
						cout << seats[i][j] << " ";
					}
					cout << endl;
			}
		}
		
		void book(int i, int j){
			if(seats[i][j] == "X"){
				cout << "The seat is already booked." << endl;
			}
			seats[i][j] = "X";
		}
		
		void cancel(int i, int j){
			if(seats[i][j] == "."){
				cout << "The seat is already empty." << endl;
			}
			seats[i][j] = ".";
		}
		
		void Favail(){
			for(int i = 1; i <=2; i++){
				for(int j = 1; j < 7; j++){
					char ch = 'A' - 1 + j;
					if(seats[i][j] == "."){
						cout << i << ch << " ";
					}
				}
			}
			cout << endl;
		}
		
		void Bavail(){
			for(int i = 3; i <=7; i++){
				for(int j = 1; j < 7; j++){
					char ch = 'A' - 1 + j;
					if(seats[i][j] == "."){
						cout << i << ch << " ";
					}
				}
			}
			cout << endl;
		}
		
		void Eavail(){
			for(int i = 8; i <=13; i++){
				for(int j = 1; j < 7; j++){
					char ch = 'A' - 1 + j;
					if(seats[i][j] == "."){
						cout << i << ch << " ";
					}
				}
			}
			cout << endl;
		}
};

int main(){
	atbs flight1;
	cout << "Welcome to flight booking systems"<< endl;
	cout << "The available seats for flight 1 are as follow"<< endl;
	flight1.assign();
	flight1.display();
	
	int cont;
	
	do{
	cout <<"_______MENU_______"<<endl;
	cout<<"Press 1 to book a seat" << endl;
	cout << "Press 2 to cancel seat" << endl;
	cout << "Press 3 to display seating arrangement " << endl;
	int choice;
	cin >> choice;
	
	switch(choice){
		case 1:
		cout << "how many seats do you want to book?: ";
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			int ticktype;
			cout <<"Press 1.First Class, 2.Business Class, 3.Economy Class: ";
			cin >> ticktype;
			if(ticktype==1){
					flight1.Favail();
			}
			if(ticktype==2){
					flight1.Bavail();
			}
			if(ticktype==3){
					flight1.Eavail();
			}
			int r;
			char c;
			cout << "enter the row of seat: ";
			cin >> r; 
			cout << "enter the column of seat: ";
			cin >> c;
			c = c - 'A' + 1; 
			flight1.book(r, c);
		}
		break;
		
		case 2:
		cout << "how many seats do you want to cancel?: ";
		int ne;
		cin >> ne;
		for(int i = 0; i < ne; i++){
			int row, col;
			cout << "enter the row of seat: ";
			cin >> row; 
			cout << "enter the column of seat: ";
			cin >> col; 
			flight1.cancel(row, col);
		}
		break;
		
		case 3:
		flight1.display();
		break;
	}
	
	cout << "If you want to do further operation press 1, or any key to exit: ";
	cin >> cont;
	}while(cont == 1);
	
	return 0;
}
