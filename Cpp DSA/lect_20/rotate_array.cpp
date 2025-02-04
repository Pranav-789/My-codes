class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        
        vector<int> temp(k);
        int count = k-1;
        for(int j = n-k; j < n; j++){
            temp[count] = nums[j];
            count--;
        }
        for(int i = n-1; i >= k; i--){
            nums[i] = nums[i-k];
        }
        for(int l =0; l < k; l++){
            nums[l] = temp[k-l-1];
        }
    }
}; //rum time 0ms


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> temp(nums.size());

//         for(int i = 0; i < nums.size(); i++){
//             temp[(i+k)%nums.size()] = nums[i];
//         }

//         nums = temp;
//     }
// };  runtime 4ms