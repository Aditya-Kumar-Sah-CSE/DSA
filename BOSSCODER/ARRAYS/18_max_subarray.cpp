class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0] ,n = nums.size() ,     curr_max = nums[0]; 
  
    for(int i = 1 ; i < n ; i++){
        curr_max = max(nums[i],curr_max + nums[i]);
        max_sum = max(curr_max, max_sum);
    }


     return max_sum;

    }
};
