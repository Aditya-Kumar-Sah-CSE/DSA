/*
 * @lc app=leetcode id=1913 lang=cpp
 *
 * [1913] Maximum Product Difference Between Two Pairs
 */

// @lc code=start
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        // ! approach 1 : direct sort - last two ka product - first two 

        // sort(nums.begin(),nums.end());

        // int s = nums.size();
        // int ans = nums[s-1]*nums[s-2] - nums[0]*nums[1];

        // return ans;
// ! Approach 2 - tc = n

int largest = INT_MIN , sec_largest = INT_MIN ,smallest = INT_MAX , sec_smallest = INT_MAX;

for(int &num : nums){
    if (num>largest)
    {
        sec_largest = largest;
        largest = num;
    }
    else{
        sec_largest=max(sec_largest,num);
    }
    if (num <smallest)
    {
        sec_smallest = smallest;
        smallest = num;
    }
    else{
        sec_smallest = min(sec_smallest,num);
    }
    
}

return largest* sec_largest - smallest * sec_smallest;
    }
};
// @lc code=end

