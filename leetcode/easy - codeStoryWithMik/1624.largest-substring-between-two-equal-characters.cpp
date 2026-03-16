/*
 * @lc app=leetcode id=1624 lang=cpp
 *
 * [1624] Largest Substring Between Two Equal Characters
 */

// @lc code=start
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
//         int l = s.size();
// int res = -1;
//! Approach 1:Brute Force 
    
//         int l = s.size();
// int res = -1;
// for (int i = 0; i < l-1; i++)
// {
//     for (int j = i+1; j < l; j++)
//     {
//         if (s[i]==s[j])
//         {
//             res = max(res,j-i-1);
//         }
        
//     }
    
// }
// return res;
//! Approach 2: using map;
//         int l = s.size();
// int res = -1;
// unordered_map<char,int> mp;
// for (int i = 0; i < l; i++)
// {
//     /* code */
// char ch = s[i];
// if(mp.find(ch)==mp.end()){
//     mp[ch]=i;
// }else{
//     res = max(res,i-mp[ch]-1);
// }


// }


// return res;

//! Approach3 : using vector 
                int l = s.size();
int res = -1;
vector<int> count(26,-1);

for (int i = 0; i < l; i++)
{
    char ch = s[i];

    if(count[ch - 'a'] == -1) count[ch-'a']=i;
    else res=max(res,i-count[ch-'a']-1);
}

return res;
    }
};
// @lc code=end

