/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        //!Approach1 : sort both and check 
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;

// ! Aproach2 : 26 size ka vector le ke frequency sab ka nikal mege 
//! unicode character hoge to vector 128 or map lena - char , int 
vector<int> count(26,0);
for(auto &ch : s ) count[ch - 'a']++;
for(auto &ch : t) count[ch -'a']--;

//! method 1

// for (int i = 0; i < 26; i++)
// {
//     if (count[i])
//     {
//         return false;
//     }
    
// }

// return true;

//! method 2 lemda 

bool allZeros = all_of(begin(count),end(count),[](int element){
    return element == 0;
});


return allZeros;



    }
};
// @lc code=end

