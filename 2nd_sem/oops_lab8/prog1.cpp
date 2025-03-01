#include<iostream>
#include<time.h>
using namespace std;

class magic2D{
	private:
	bool arr[10];
	
	int mag_arr[3][3];
	int sum_arr[8];
	public:
	
	void initbool(){
		for(int i = 0; i < 10; i++){
			arr[i] = false;
		}
	}
	
	void initmag(){
		
		for(int i = 0; i<3; i++){
			for(int j = 0; j<3; j++){
				init:
				mag_arr[i][j] = rand() % 9 + 1;
				if(arr[mag_arr[i][j]]){
					goto init;
				}
				else{
					arr[mag_arr[i][j]] = true;
				}
			}
		}
	}
	
	bool initSumarr(){
		int k = 0;
		for(int i = 0; i < 3; i++){
			int s = 0;
			for(int j = 0; j < 3; j++){
				s += mag_arr[i][j];
			}
			sum_arr[k++] = s;
			//cout << "check"<<endl;
		}
		
		for(int i = 0; i < 3; i++){
			int s = 0;
			for(int j = 0; j < 3; j++){
				s += mag_arr[j][i];
			}
			sum_arr[k++] = s;
			//cout << "check"<<endl;
		}
		
		int i = 0, j = 0;
		while(i<3 && j <3){
			int s = mag_arr[i][j];
			sum_arr[k++] = s;
			i++;
			j++;
			//cout << "checkw"<<endl;
		}
		
		i = 2, j = 0;
		while(i >= 0 && j <= 2){
			int s = mag_arr[i][j];
			sum_arr[k++] = s;
			i--;
			j++;
			//cout << "checkw"<<endl;
		}
		
		for(int i = 1; i < 8; i++){
			if(sum_arr[i] != sum_arr[i-1]){
				return false;
			}
			//cout << "check"<<endl; 
		}
		return true;
	}
	
	void display(){
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				cout << mag_arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};

int main(){
	int cnt = 0;
	while(cnt < 100000){
		magic2D m1;
		m1.initbool();
		m1.initmag();

		//m1.display();
	
		if(m1.initSumarr()){
			m1.display();
			cout << "The array is a magic array!." << endl;
		}
		//else{
			//cout << "The array is not a magic array!." << endl;
		//}
		//cout << "check" << endl;
		//cout << "END" << endl;
		cout << endl;
		cnt++;
	}
	return 0;
}
