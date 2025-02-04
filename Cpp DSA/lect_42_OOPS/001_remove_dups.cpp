#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
private:
    void Solve(vector<int>& nums, int& k){
        int n = nums.size();
        int *arr = new int[n];

        arr[0] = nums[0];

        for(int i = 1; i < n; i++){
            if(nums[i] > arr[k]){
                k++;
                arr[k] = nums[i];
            }
        }
        k++;

        for(int i = 0; i < k; i++){
            nums[i] = arr[i];
        }

        delete []arr;
    }

public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        Solve(nums, k);
        return k;
    }
};