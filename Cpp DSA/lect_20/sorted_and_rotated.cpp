class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int min_index = 0;

        for(int i = 1; i < n; i++){
            if(nums[i-1] > nums[i]){
                min_index = i;
            }
        }
        for(int j = min_index; j < n-1; j++){
            if(nums[j] > nums[j+1]){
                return false;
            }
        }
        for(int k = 0; k < min_index-1; k++){
            if(nums[k] > nums[k+1]){
                return false;
            }
        }

        if(min_index > 0 && nums[0] < nums[n-1]){
            return false;
        }

        return true;

    }
}; //runtime = 0ms and beats 56% space

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] > nums[(i+1)%n]){ // %n provides a circular check of last and first index;
                count++;
            }
        }

        if(count == 1 || count == 0){
            return true;
        }

        return false;

    }
}; //runtime = 0ms and beats 10% space;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for(int i = 1; i < n; i++){
            if(nums[i-1] > nums[(i)]){ // %n provides a circular check of last and first index;
                count++;
            }
        }
        if(nums[0] < nums[n-1]){
            count++;
        }

        return count<=1;

    }
};// runtime 0ms, space 10%