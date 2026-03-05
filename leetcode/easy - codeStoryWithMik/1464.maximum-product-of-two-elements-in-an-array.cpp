/*
 * @lc app=leetcode id=1464 lang=cpp
 *
 * [1464] Maximum Product of Two Elements in an Array
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //! approach1: sort the array and return the product of the last two elements
    // sort(nums.begin(),nums.end());
    // return (nums[nums.size()-1]-1) * (nums[nums.size()-2]-1);
    
//!approach2 max product
// int n= nums.size();
// int curr_max = 0;
// int res = 0;

// for (int i = 0; i < n; i++)
// {
//     res=max(res,(nums[i]-1)*(curr_max -1));
//     curr_max = max(curr_max,nums[i]);
// }
// return res;

//!approach3

int largest = 0;
int sec_largest = 0;

for (int &num :nums)
{
    if (num>largest)
    {
        sec_largest = largest;
        largest=num;
    }
    else{
        sec_largest=max(sec_largest,num);
    }
   
}
 return (largest -1)*(sec_largest-1);


    }
};
// @lc code=end

