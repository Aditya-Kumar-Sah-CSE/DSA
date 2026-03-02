/*
 * @lc app=leetcode id=1688 lang=cpp
 *
 * [1688] Count of Matches in Tournament
 */

// @lc code=start
class Solution {
public:
    int numberOfMatches(int n) {
//! approach 1

        int matches=0;

        while (n>1)
        {
            if (n%2 != 0)
            {
                matches+=(n-1)/2;
                n=(n-1)/2 + 1; 
            }
            else{
                matches+=n/2;
                n/=2;
            }
            
        }
        return matches;

//! approach 2
// 1 matches = 1 team elemination
// 1 winner and n-1 looser
return n-1;

    }
};
// @lc code=end

