class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int l = 0,r=1,count=0;

        while(r<n){
            if(l == r ){
                r++;
                continue;
            }
            int diff = nums[r] - nums[l];
            if(diff < k) r++;
            else if(diff>k) l++;
            else {
                // diff == k
                count++;
                int lvalue = nums[l],rvalue = nums[r];
                // skip duplicate 
                while(l<n && nums[l] == lvalue) l++;
                while(l<n && nums[r] == rvalue) r++;
            }
        }
        return count;
    }
};
