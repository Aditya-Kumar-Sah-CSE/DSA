/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start

//! approach1: using map
// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         unordered_map<char,int> mp;

//         for (char &ch :s)
//         {
//             mp[ch]++;
//         }

//         for (char &ch :t)
//         {
//             mp[ch]--;
//             if(mp[ch]<0)
//            {
//             return ch;
//            } 
      /* // for (char &ch :t)
        // {
            
        //     if(mp.find(ch)==mp.end())
        //    {
        //     return ch;
        //    } 
        // }*/ 
//         return 'x';
//     }
// };
//! approach2: sum of all ASCII
// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         long long sums =0,sumt=0;
// for (int i = 0; i <  t.size(); i++)
// {
//     sumt+=t[i];
// }
// for (int i = 0; i <  s.size(); i++)
// {
//     sumt-=(s[i]);
// }

//      return (char)(sumt);
// }
// };
//! approach3: using xor
class Solution {
public:
    char findTheDifference(string s, string t) {
        char c =t[0];
for (int i = 0; i < s.size(); i++)
{
    c ^=s[i];
    c ^=t[i+1];
}

        
        
        return c;
    }
};
// @lc code=end

