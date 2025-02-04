#include <bits/stdc++.h>

class Solution {
public:
    int peakIndexInMountainArray(std::vector<int>& arr) {
        int max = 0;
        int s = 0;
        int e = arr.size() -1;
        int mid;
        while(s < e){ // we will not use equal sign
            mid = s + (e - s)/2;
            if((arr[mid] < arr[mid + 1])){
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }
        return s;
    }
};