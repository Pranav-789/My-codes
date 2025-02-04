#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int firstocc(int arr[], int n, int k) {
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;  // Correctly calculate mid
        if (k == arr[mid]) {    // Use curly braces for clarity
            ans = mid;
            s = mid - 1;
        } else if (k > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastocc(int arr[], int n, int k) {
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;  // Correctly calculate mid
        if (k == arr[mid]) {
            ans = mid;
            s = mid + 1;  // Move right to find the last occurrence
        } else if (k > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
    pair<int, int> p;  // Declare the pair to hold the results
    p.first = firstocc(arr.data(), n, k);  // Use arr.data() to access the underlying array
    p.second = lastocc(arr.data(), n, k);  // Use arr.data() to access the underlying array

    return p;
}
