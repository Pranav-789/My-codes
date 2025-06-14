//Do Not Be Distracted(1520A)
// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         int freq[26] = {0};
//         bool flag = true;
//         freq[s[0]-'A'] = 1;
//         for(int j = 1; j < n; j++){
//             if(s[j] != s[j-1]){
//                 if(freq[s[j]-'A']> 0){
//                     flag = false;
//                     break;
//                 }
//             }
//             freq[s[j]-'A']++;
//         }

//         if(flag){
//             cout << "YES" << endl;
//         }
//         else cout << "NO" << endl;
//     }
//     return 0;
// }


//Minutes Before New Year(1283A)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int h,  m;
//         cin >> h >> m;
//         cout << 24*60-(h*60+m)<<endl;
//     }
//     return 0;
// }

//Serval and string Theory
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n, k;
//         cin >> n >> k;
//         int freq[26] = {0};
//         string s;
//         cin >> s;
//         int cnt = 0;

//         for (char c : s) {
//             if (freq[c - 'a'] == 0) cnt++; 
//             freq[c - 'a']++;
//         }

//         if(n==1 || cnt == 1) {
//             cout << "NO" <<endl;
//              continue;
//         }
//         if(k==0){
//             bool isPalindrome = true;
//             int i;
//             for (i = 0; i < n / 2; i++) {
//                 if (s[i] != s[n - i - 1]) {
//                     isPalindrome = false;
//                     break;
//                 }
//             }
//             if(isPalindrome){
//                 cout << "NO" << endl;
//                 continue;
//             }
//             else{
//                 if(s[i] < s[n-i-1]){
//                     cout << "YES" << endl;
//                 }
//                 else{
//                     cout << "NO" << endl;
//                 }
//             }
//             continue;
//         }
//         if(cnt > 1){
//             cout << "YES" << endl;
//         }
        
//     }
//     return 0;
// }

//Dominant Phirana
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         for(int i = 0; i< n; i++){
//             cin >> arr[i];
//         }
//         bool allSame = true;
//         for (int i = 1; i < n; i++) {
//             if (arr[i] != arr[0]) {
//                 allSame = false;
//                 break;
//             }
//         }
//         if (allSame) {
//             cout << -1 << endl;
//             continue;
//         }
        
//         int maxi = *max_element(arr.begin(), arr.end());

//         for(int i = 0; i < n;i++){
//             if(arr[i] == maxi){
//                 if(i>=1 && arr[i-1]<arr[i]){
//                     cout << i+1 << endl;
//                     continue;
//                 }
//                 if(i < n-1 && arr[i+1] < arr[i]){
//                     cout << i+1<< endl;
//                     continue;
//                 }
//             }
//         }
//     }
//     return 0;
// }

//Binary Matrix
//each row should contain even 1 ones