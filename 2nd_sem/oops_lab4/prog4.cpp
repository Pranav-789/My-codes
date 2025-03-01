#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;

class datamng{
private:
	float solvemean(vector<float>& v){
		int n = v.size();
		float sum = 0;
		for(int i = 0; i < n; i++){
			sum += v[i];
		}
		float mean = sum / n;
		return mean;
	}
	
	void solvemedian(vector<float>& v){
		int n = v.size();
		cout << endl;
		for(int i = 0; i < n; i++){
			cout << v[i] << endl;
		}
		float median;
		int m = n/2;
		if(n % 2 == 0){
			median = (v[m] + v[m-1])/2;
		}
		else{
			median = v[m];
		}

		cout << "Median of the data is: " << median << endl;
	}
	
	void solvemode(vector<float> v){
		int maxfreq = 0;
		vector<float> ans;
		int n = v.size();
		
		for(int i = 0; i < n; i++){
			int freq = 1;
			if(v[i] != -1){
				for(int j = 0; j < n; j++){
					if(v[i] == v[j] && i != j){
					v[j] = -1;
					freq++;
					}
				}
			}
			if(freq >= maxfreq){
				if(freq > maxfreq){
					int g = ans.size();
					for(int i = 0; i < g; i++){
						ans.pop_back();
					}
					maxfreq = freq;
					ans.push_back(v[i]);
				}
				else{
				maxfreq = freq;
				ans.push_back(v[i]);
				}
			}
		}
		int r = ans.size();
		for(int i = 0; i < r; i++){
			cout << "The mode of data is " << ans[i] << " with frequency: " << maxfreq << endl;
		}
	}
	
	void solvedev(vector<float>& v){
		float y = solvemean(v);
		int n = v.size();
		
		float sum = 0;
		for(int i = 0; i < n; i++){
				sum += (v[i] - y)*(v[i] - y);
		}
		
		float sn = sum / n;
		float ans = sqrt(sn);
		cout << "The standard deviation is : " << ans << endl;
	}
public:
	void solution(vector<float>& v1){
		sort(v1.begin(), v1.end());
		float x=solvemean(v1);
		cout << "Mean of the data is: " << x << endl;
		solvemedian(v1);
		solvemode(v1);
		solvedev(v1);
	}
	
};

int main(){
	datamng d1;
	int n;
	cout << "Enter the size of data: "<< endl;
	cin >> n;
	
	vector<float> V1(n);
	
	for(int i = 0; i < n; i++){
		cout << "Enter data " << i + 1 << " : ";
		cin >> V1[i];
	}
	
	d1.solution(V1);
	return 0;
}

