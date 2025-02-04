// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// long long main(){
//     long long t;
//     cin>>t;

//     while(t--){
//         long long n, x, y;
//         cin >> n >> x >> y;

//         long long arr[n+1];
//         long long sum_arr = 0;

//         for(long long i = 1; i <= n; i++){
//             cin>>arr[i];
//             sum_arr += arr[i];
//         }
        
//         long long lower_bnd = sum_arr - y;
//         long long upper_bnd = sum_arr - x;
//         sort(arr, arr + n);
//         long long count_u = 0, count_l = 0;

//         for(long long i = 1; i <= n; i++){
//             for(long long j = i+1; j <= n; j++){
//                 if(arr[i] + arr[j] <= upper_bnd){
//                     count_u++;
//                 }
//             }
//         }

//         for(long long i = 1; i <= n; i++){
//             for(long long j = i+1; j <= n; j++){
//                 if(arr[i] + arr[j] <= lower_bnd-1){
//                     count_l++;
//                 }
//             }
//         }

//         cout << count_u - count_l << endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long t;
//     cin >> t;

//     while(t--){
//         long long n, x, y;
//         cin >> n >> x >> y;

//         long long arr[n+1];  // Use a 1-based index
//         long long sum_arr = 0;

//         sort(arr + 1, arr + n);

//         for(long long i = 1; i <= n; i++){
//             cin >> arr[i];
//             sum_arr += arr[i];
//         }

//         long long lower_bnd = sum_arr - y;
//         long long upper_bnd = sum_arr - x;

//         long long count_u = 0, count_l = 0;

//         // Counting pairs that sum <= upper_bnd
//         for(long long i = 1; i <= n; i++){
//             for(long long j = i + 1; j <= n; j++){
//                 if(arr[i] + arr[j] <= upper_bnd){
//                     count_u++;
//                 }
//             }
//         }

//         // Counting pairs that sum <= lower_bnd - 1
//         for(long long i = 1; i <= n; i++){
//             for(long long j = i + 1; j <= n; j++){
//                 if(arr[i] + arr[j] <= lower_bnd - 1){
//                     count_l++;
//                 }
//             }
//         }

//         cout << count_u - count_l << endl;
//     }
//     return 0;
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while(t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        long long arr[n+1];
        long long sum_arr = 0;

        for(long long i = 1; i <= n; i++) {
            cin >> arr[i];
            sum_arr += arr[i];
        }

        long long lower_bnd = sum_arr - y;
        long long upper_bnd = sum_arr - x;

        // Sort the array to use two-pointer approach
        sort(arr + 1, arr + n + 1);

        // Function to count pairs where sum <= bound
        long long count_pairs(long long bound) {
            long long count = 0;
            long long left = 1, right = n;
            while (left < right) {
                if (arr[left] + arr[right] <= bound) {
                    count += (right - left);
                    left++;
                } else {
                    right--;
                }
            }
            return count;
        };

        long long count_u = count_pairs(upper_bnd);
        long long count_l = count_pairs(lower_bnd - 1);

        cout << count_u - count_l << endl;
    }

    return 0;
}
