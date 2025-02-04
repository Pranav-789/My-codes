//https://www.codechef.com/problems/TWOCLOSE?tab=statement
//solution given below
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n+1];
	    for(int i = 0; i < n+1; i++){
	        cin>>arr[i];
	    }
	    int ans = 0;
	    
	    for(int j = 0; j < n; j++){
	       ans = ans + arr[j]; 
	    }
	    
	    for(int i = 0; i <n+1; i++){
	        int sum = 0;
	        for(int k = 0; k < n; k++){
	            if(arr[k] <= (2*arr[n]) && arr[k] > arr[n]){
	                int temp = arr[k];
	                arr[k] = arr[n];
	                arr[n] = temp;
	            }
	        }
	       
	        for(int j = 0; j < n; j++){
	            sum = sum + arr[j]; 
	        }
	        if(sum < ans){
	            ans = sum;
	        }
	    }
	    cout<<ans<<endl;
	}
}