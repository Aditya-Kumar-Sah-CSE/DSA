/*
 * @lc app=leetcode id=1897 lang=cpp
 *
 * [1897] Redistribute Characters to Make All Strings Equal
 */

// @lc code=start
class Solution {
public:
    bool makeEqual(vector<string>& words) {
// ! Approach1 : divide each letter to each word in words array


// vector<int> fre(26,0);
//         for (size_t i = 0; i < words.size(); i++)
//         {
//             for (int j = 0; j < words[i].size(); j++)
//             {
//                 fre[words[i][j]-'a']++;
//             }
            
//         }
        
// for (int i = 0; i < 26; i++)
// {
//     if (fre[i] % words.size()!= 0)
//     {
//         return false;
//     }
    
// }

// return true;
// ! using unordered_map 
// int n = words.size();
// unordered_map<char,int> mp;
// for (string &word : words)
// {
//     for(char &ch : word){
//         mp[ch]++;
//     }
// }

// for (auto &it : mp)
// {
//     int freq = it.second;

//     if(freq % n != 0){
//         return false;
//     }
// }

// return true;

//! Approach3 using stl
int n = words.size();
vector<int> fre(26,0);
        for (size_t i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].size(); j++)
            {
                fre[words[i][j]-'a']++;
            }
            
        }
auto lambda = [&](int freq){
    return freq%n==0;
};


return all_of(begin(fre),end(fre),lambda);

    }
};
// @lc code=end

