/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //! Approach 1 - using vector 
        // vector<long long> ans(nums.size()+1,0);
        // for (int &n : nums)
        // {
        //     ans[n]=1;
        // }
        // for (long long i = 0; i <= nums.size(); i++)
        // {
        //     if(ans[i]==0) return i;
        // }
        // return -1;
//! Approach 2 :finding sum 
// long long n = nums.size();
// long long sum = n*(n+1)/2;
// for (int i = 0; i < n; i++)
// {
//     sum-=nums[i];
// }

// return sum>0?sum :-sum;

//!Approach 3 :using XOR properties same ka XOR 0
// int n = nums.size();
// int ans = n;
// for(int i =0;i<n;i++){
// ans^=i;
// ans^=nums[i];
// }
// return ans;
//     }
// };
//! Approach 4 : using sorting index != value 
// sort(begin(nums),end(nums));
// for (int i = 0; i < nums.size(); i++)
// {
//     if (i!=nums[i])
//     {
//         return i;
//     }
    
// }
// return nums.size();

//! Approach 4 : ii) using binary search 

int n = nums.size();
sort(nums.begin(),nums.end());

int res = n;

int l =0,r= n-1;

while (l<=r)
{
    int mid = l + (r-l)/2;

    if (nums[mid]>mid)
    {
        res = mid;
        r = mid-1;
    }
    else{
        l=mid+1;
    }
}

return res;

    }};

// @lc code=end

