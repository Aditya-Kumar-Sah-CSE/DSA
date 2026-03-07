/*
 * @lc app=leetcode id=1436 lang=cpp
 *
 * [1436] Destination City
 */

// @lc code=start
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        //! Approach1: hashmap - outgoing edge count , check second any outgoing edge
        // unordered_map<string , int> mp;

        // for (auto &path : paths)
        // {
        //     string src = path[0];
        //     mp[src]=1;
        // }
        // for (auto &path : paths)
        // {
        //     string dest = path[1];

        //     if (mp[dest] != 1)
        //     {
        //         return dest;
        //     }
            
        // }
        // return "";

        //!Approach2: hashset - store city having outgoing edge in set check second city ispresent in set

          unordered_set<string> st;

        for (auto &path : paths)
        {
            string src = path[0];
            st.insert(src);
        }
        for (auto &path : paths)
        {
            string dest = path[1];

            if (st.find(dest) == st.end())
            {
                return dest;
            }
            
        }
        return "";

    }
};
// @lc code=end

