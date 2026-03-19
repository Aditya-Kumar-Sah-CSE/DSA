/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //!Approach 1 : sort both and satisfy each child greed and minimum number of cookie 
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

      int greed = 0,cookie =0;
      while (greed<g.size() && cookie<s.size())
      {
        if (g[greed]<=s[cookie])
        {
            greed++;
        }
        cookie++;
      }
      
        return greed;
    }
};
// @lc code=end

