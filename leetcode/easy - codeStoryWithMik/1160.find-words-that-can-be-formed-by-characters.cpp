/*
 * @lc app=leetcode id=1160 lang=cpp
 *
 * [1160] Find Words That Can Be Formed by Characters
 */

// @lc code=start
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        //! approach1
vector<int> a(26,0);
        for (int i = 0; i < chars.size(); i++)
        {
           a[chars[i]-'a']++;
        }
        int sum=0;
        for (int i = 0; i < words.size(); i++)
        {
            vector<int> b(26,0);
            bool yes = true;
            for (int j = 0; j < words[i].size(); j++)
            {
                b[words[i][j]-'a']++;
                if (b[words[i][j]-'a'] > a[words[i][j]-'a'])
                {
                    yes =false;
                    break;
                }

                
            }
            if (yes)
            {
                sum+=words[i].size();
            }
            
        }
        return sum;
    }
};
// @lc code=end

