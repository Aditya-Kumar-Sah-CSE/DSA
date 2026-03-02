/*
 * @lc app=leetcode id=2264 lang=cpp
 *
 * [2264] Largest 3-Same-Digit Number in String
 */

// @lc code=start
class Solution {
public:
    string largestGoodInteger(string num) {
       
//! approach1

//    string ans = "";

//         for (int i = 0; i < num.size() - 2; i++) {
            
//             if (num[i] == num[i+1] && num[i] == num[i+2]) {
                
//                 string temp = num.substr(i, 3);
                
//                 if (temp > ans) {
//                     ans = temp;
//                 }
//             }
//         }

//         return ans;


//! approach2
int n = num.length();

char maxChar = ' ';

for (int i = 2; i < n; i++)
{
    if (num[i] == num[i-1] && num[i] == num[i-2])
    {
       maxChar=max(maxChar,num[i]);
    }
    
}

if (maxChar==' ')
{
    return "";
}


return string(3,maxChar);
    }
};
// @lc code=end

