// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         int ocnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//             if(a[i] == 0){
//                 ocnt++;
//             }
//         }
        
//         if(ocnt == 0){
//             cout << 1 << endl;
//             continue;
//         }

//         if(ocnt == n){
//             cout << 0 << endl;
//             continue;
//         }

//         if(n == 1){
//             if(a[0]== 0){
//                 cout << 0 << endl;
//                 continue;
//             }
//             else{
//                 cout << 1 << endl;
//                 continue;
//             }
//         }

//         if(a[0] != 0 && a[n-1] != 0 && ocnt >= 1){
//             cout << 2 << endl;
//             continue;
//         }

//         if((a[0] == 0 && a[n-1] != 0)||(a[0]!=0 && a[n-1]==0)){
//             if(ocnt == 1){
//                 cout<<1<<endl;
//                 continue;
//             }
//             else if(ocnt>1){
//                 cout<<2<<endl;
//                 continue;
//             }        
//         }

//         if(a[0] == 0 && a[n-1]==0){
//             if(n==3){
//                 cout<< 1 << endl;
//                 continue;
//             }
//             if(ocnt == 2){
//                 cout<<1<<endl;
//                 continue;
//             }

//             int turn= 0;

//             for (int i = 3; i <= n - 2; i++)
//             {
//                 if(a[i]==0 && a[i-1]!=0 && a[i+1]!=0){
//                     turn++;
//                 }
//             }
//             if(turn == 0){
//                 cout << 1 << endl;
//                 continue;
//             }
//             if(turn != 0){
//                 cout << 2 << endl;
//                 continue;
//             }
//         }
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        bool has_zero = false;
        bool contiguous = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) has_zero = true;
        }

        bool all_zero = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                all_zero = false;
                break;
            }
        }
        if (all_zero) {
            cout << 0 << endl;
            continue;
        }

        int first_non_zero = -1, last_non_zero = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                if (first_non_zero == -1) first_non_zero = i;
                last_non_zero = i;
            }
        }

        for (int i = first_non_zero; i <= last_non_zero; i++) {
            if (a[i] == 0) {
                contiguous = false;
                break;
            }
        }

        if (contiguous) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}
