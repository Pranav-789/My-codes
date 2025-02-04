// #include<iostream>
// using namespace std;

// void bus(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size-1; j++)
//         {
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
        
//     }
    
// }

// int main() {
//     int T;
//     cin>>T;
    
//     while(T--){
//         int N;
//         cin>>N;
        
//         int a[N];
//         for(int i = 0; i < N; i++){
//             cin>>a[i];
//         }
//         int b[N], c[N];
        
//         int count_b = 0;
//         int count_c = 0;

        
        
//         for(int i = 0; i < N; i++){
//             int exist = 0;
//             for(int j = 0; j <= count_c; j++){
//                 if (((a[i] / c[j]) != 0) && c[j]!=0)
//                 {
//                     b[count_b] = a[i];
//                     count_b++;
//                     exist++;
//                 }   
//             }
//             if(exist != 0){
//                 c[count_c] = a[i];
//                 count_c++;
//             }

//         }

//         cout<<count_b<<" "<<count_c<<endl;

//         bus(b, count_b);
//         for (int i = 0; i < count_b; i++)
//         {
//             cout<<b[i]<<" ";
//         }
//         cout<<'\n';

//         bus(c, count_c);
//         for (int i = 0; i < count_c; i++)
//         {
//             cout<<c[i]<<" ";
//         }
        


//     }
// }

#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
using namespace std;

// Bubble Sort Function (although it's not efficient for large arrays)
void bus(vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;

        vector<int> a(N);
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }

        vector<int> b; // To store the filtered values
        vector<int> c; // To store the unique values

        for (int i = 0; i < N; i++) {
            bool isInC = false; // Flag to check if current element is in c
            for (int j = 0; j < c.size(); j++) {
                // Check if a[i] is divisible by c[j]
                if (c[j] != 0 && a[i] % c[j] == 0) {
                    b.push_back(a[i]); // Add a[i] to b
                    isInC = true; // Mark that we added a[i]
                    break; // No need to check further
                }
            }
            // Add a[i] to c if it was not already added
            if (!isInC) {
                c.push_back(a[i]);
            }
        }

        cout << b.size() << " " << c.size() << endl;

        bus(b); // Sort b
        for (int val : b) {
            cout << val << " ";
        }
        cout << '\n';

        bus(c); // Sort c
        for (int val : c) {
            cout << val << " ";
        }
        cout << '\n'; // New line after printing c
    }

    return 0; // Indicate that the program ended successfully
}
