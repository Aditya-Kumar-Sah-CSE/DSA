/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {
        // ! Approach 1 
//         stack<char> st;
//         int result = 0;
//         for(char &ch : s){
//             if(ch=='(') st.push(ch);
//             else if (ch==')')
//             {
//                 st.pop();
//             }
//            result= max(result,(int)st.size());
//         }

// return result;
//! Approach2

int openBracket = 0;
        int result = 0;
        for(char &ch : s){
            if(ch=='(') openBracket++;
            else if (ch==')')
            {
               openBracket--;
            }
           result= max(result,openBracket);
        }

return result;
    }
};
// @lc code=end

