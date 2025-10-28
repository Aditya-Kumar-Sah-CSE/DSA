class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        long long sum = 0;
        for(int x = 0 ; x<nums.size();x++) {
           
            sum+=nums[x];
             nums[x] = sum; 
        }
        return nums;
    }
};
