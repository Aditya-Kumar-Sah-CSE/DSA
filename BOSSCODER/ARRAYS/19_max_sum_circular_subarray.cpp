class Solution {

public:
int kadan_max(vector<int>& nums , int n){
    int curr_max = nums[0] , max_sum = nums[0];

    for(int i = 1 ; i < n ; i++){
        curr_max = max(curr_max + nums[i], nums[i]);
        max_sum = max(max_sum,curr_max);

    }

    return max_sum;
}
int kadan_min(vector<int>& nums , int n){
    int curr_max = nums[0] , max_sum = nums[0];

    for(int i = 1 ; i < n ; i++){
        curr_max = min(curr_max + nums[i], nums[i]);
        max_sum = min(max_sum,curr_max);

    }

    return max_sum;
}
    int maxSubarraySumCircular(vector<int>& nums) {
                int n = nums.size() ; 
                int tsum = 0;
                 for(int i = 0 ; i < n ; i++) tsum+=nums[i];
                 int max_s = kadan_max(nums,n);
                 int min_s = kadan_min(nums , n);
                 int cir_s = tsum - min_s , ans;
  
  

if(max_s > 0)
     ans =  max(cir_s,max_s);
    
    else ans = max_s;

    return ans;
    }
};
