#include<bits/stdc++.h>
using namespace std;

void menu(int& num){
		cout << "!----MENU----!" << endl;
		cout << "1.Double the integer." << endl;
		cout << "2.Reverse the digits of integer." << endl;
		cout << "3.Raise the number to power 2, 3, 4." << endl;
		cout << "4.sum the dits of number." << endl;
		cout << "5.if number is two digit number Raise firts digit to power of second digit." << endl;
		cout << "6.if number is three digit number and last digits <= 4, then raise the first two digit to power of last digit." << endl;
		cout << "7. exit " << end;
		int choice;
		cout << "Press number to continue with option : ";
		cin >> choice;
		
		switch(choice){
			case 1:
			num = 2 * num;
			break;
			
			case 2:
			int copy = num;
			int ans = 0;
			while(copy != 0){
				ans = ans*10 + copy % 10;
				copy = copy / 10;
			}
			break;
			
			case 3:
			read:
			int power;
			cout << "choose power 2, 3 or 4: ";
			cin >> power;
			if(power == 2){
				num = pow(num, 2);
			}
			else if(power == 3){
				num = pow(num, 3);
			}
			else if(power == 4){
				num = pow(num, 4);
			}
			else{
				cout << "Invalid Input!"<<endl;
				goto read;
			}
			break;
			
			case 4:
			int digisum = 0;
			int cpy = num;
			while(cpy != 0){
				digisum += cpy%10;
				cpy = cpy /10;
			}
			break;
			
			case 5:
			if(num >= 10 && num < 100){
					int firdig = (num / 10) % 10;
					int lastdig = num % 10;
					firdig = pow(firdig, lastdig);
					num = firdig*10 + lastdig;
			}
			break;
			
			case 6:
			if((num >= 100 && num < 1000) && ((num % 10) <= 4)){
				int firstdig = ((num / 10)/10) %10;
				int seconddig = (num / 10) % 10;
				int lastestdig = num % 10;
			}
		}
}

int main(){
	int x = rand() % 100;
	
}
