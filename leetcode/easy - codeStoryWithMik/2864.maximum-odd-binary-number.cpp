/*
 * @lc app=leetcode id=2864 lang=cpp
 *
 * [2864] Maximum Odd Binary Number
 */

// @lc code=start
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
                   int l = s.size();

        int count =0;
        for (int i = 0; i < l; i++)
        {
              if (s[i]=='1')
              {
                count++;
              }
              
        }

        string new_s ="";
        for (int i = 0; i < l-1; i++)
        {
            if (i<count-1)
            {
                new_s+='1';
            }else
            new_s+='0';
        }
        new_s+='1';

        return new_s;
    }
};
// @lc code=end

