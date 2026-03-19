/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26,0);

        for (int i = 0; i < s.size(); i++)
        {
            
            v[s[i]-'a']++;
            
        }
        for (int i = 0; i < s.size(); i++)
        {
            
            if(v[s[i]-'a']==1){
                return i;
            }
            
        }


        return -1;
    }
};
// @lc code=end

