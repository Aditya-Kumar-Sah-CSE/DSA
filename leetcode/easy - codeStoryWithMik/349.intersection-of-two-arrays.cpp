/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
// int m=nums1.size();
// int n=nums2.size();
// int i=0;//nums1
// int j=0;//nums2
// vector<int> v;
// while(i<m&&j<n){
//     if(nums1[i]==nums2[j]){
//         v.push_back(nums[i]);
//     }
//     else if(nums1[i]<nums2[j]) i++;
//     else{
//         j++;
//     }
// }
// return v;

//! Approach 1 : using sets

// unordered_set<int> st1(begin(nums1),end(nums1));


// unordered_set<int> st2;
// for (int &num : nums2)
// {
//     if (st1.find(num)!=st1.end())
//     {
//         st2.insert(num);
//     }
// }
// vector<int>result(begin(st2),end(st2));
// return result;

//! Approach 2

unordered_set<int> st1(begin(nums1),end(nums1));


vector<int> result;
for (int &num : nums2)
{
    if (st1.find(num)!=st1.end())
    {
        result.push_back(num);
        st1.erase(num);
    }
}

return result;

    }
};
// @lc code=end

