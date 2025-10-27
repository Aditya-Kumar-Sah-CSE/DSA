class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int n = nums.size();

         int size = INT_MAX , sum = 0 ;
         int start = 0 , end = 0;
         while(end < n){

            sum+=nums[end];
// dec window length
                while(sum>=target){
                    size =min(size,end - start + 1);
                    sum-=nums[start];
                    start++;
                }

            end++;
         }

if(size>nums.size() ) size = 0;

         return size;
        
    }
};
