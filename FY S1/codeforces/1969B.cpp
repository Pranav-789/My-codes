//solution 1
#include<iostream>
using namespace std;
 
int main(){
    int T;
    cin>>T;
    
    while(T--){
        int start = 0, end = 0;
        
        string str;
        cin>>str;
        
        int n = str.size();
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            if (str[i] == '1') {  // Start of a substring with '1'
                start = i;
                for (int j = i + 1; j < n; j++) {
                    if (str[j] == '0') {  // End of a substring with '0'
                        end = j;
                        sum += (j - i + 1);
                        
                        char temp = str[start];
                        str[start] = str[end];
                        str[end] = temp;
                        break;
                    }
                }
            }
        }
 
        cout << sum << endl;
        
        
    }
}