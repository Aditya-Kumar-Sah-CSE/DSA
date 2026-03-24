/*
 * @lc app=leetcode id=3005 lang=cpp
 *
 * [3005] Count Elements With Maximum Frequency
 */

// @lc code=start
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        //! Approach-1 : map or array[101];
int maxfreq=0;
        vector<int>  n(101,0);
        for(int & x : nums){
            n[x]++;
            maxfreq=max(maxfreq,n[x]);
        }


return count(begin(n),end(n),maxfreq)*maxfreq;
        //!approach 2 : 1 pass
    }
};
// @lc code=end

