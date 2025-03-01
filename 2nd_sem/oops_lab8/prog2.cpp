#include<iostream>
using namespace std;

bool isValid(int i, int j){
	if((i >= 0 && j >= 0) && (i < 20 && j < 20)){
		return true;
	}
	return false;
}

class board{
	int bd_arr[20][20];
	public:
	void initboard(){
		for(int i = 0; i < 20; i++){
			for(int j = 0; j < 20; j++){
				bd_arr[i][j] = rand()%100 + 1;
			}
		}
	}
	
	void cheackPeak(){
		int min_peak = 1000;
		int max_peak = -1;
		for(int i = 0; i < 20; i++){
			for(int j = 0; j < 20; j++){
				int flag = true;
				//up
				if(isValid(i-1, j)){
					if(bd_arr[i][j] <= bd_arr[i-1][j]){
						flag = false;
					}
				}
				//left
				if(isValid(i, j-1)){
					if(bd_arr[i][j] <= bd_arr[i][j-1]){
						flag = false;
					}
				}		
				//down
				if(isValid(i+1, j)){
					if(bd_arr[i][j] <= bd_arr[i+1][j]){
						flag = false;
					}
				}
				//right
				if(isValid(i, j+1)){
					if(bd_arr[i][j] <= bd_arr[i][j+1]){
						flag = false;
					}
				}
				//upright
				if(isValid(i-1, j+1)){
					if(bd_arr[i][j] <= bd_arr[i-1][j+1]){
						flag = false;
					}
				}
				//upleft
				if(isValid(i-1, j-1)){
					if(bd_arr[i][j] <= bd_arr[i-1][j-1]){
						flag = false;
					}
				}
				//downright
				if(isValid(i+1, j+1)){
					if(bd_arr[i][j] <= bd_arr[i+1][j+1]){
						flag = false;
					}	
				}
				//downleft
				if(isValid(i+1, j-1)){
					if(bd_arr[i][j] <= bd_arr[i+1][j-1]){
						flag = false;
					}
				}
				
				if(flag == true){
					cout << "peak: " << bd_arr[i][j] << "  " << i << " " << j << endl;
					if(bd_arr[i][j] > max_peak){
						max_peak = bd_arr[i][j];
					}
					if(bd_arr[i][j] < min_peak){
						min_peak = bd_arr[i][j];
					}
				}
			}
		}
		cout << "maximum peak: " << max_peak << endl;
		cout << "minimum peak: " << min_peak << endl;
	}
	
	void display(){
		for(int i = 0; i < 20; i++){
			for(int j = 0; j < 20; j++){
				cout << bd_arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};


int main(){
	board b1;
	b1.initboard();
	b1.display();
	b1.cheackPeak();
	return 0;
}

