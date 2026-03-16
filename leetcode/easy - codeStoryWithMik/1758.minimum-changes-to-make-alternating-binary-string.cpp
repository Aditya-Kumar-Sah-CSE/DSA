/*
 * @lc app=leetcode id=1758 lang=cpp
 *
 * [1758] Minimum Changes To Make Alternating Binary String
 */

// @lc code=start
class Solution {
public:
    int minOperations(string s) {
        //! Approach1 : greedily fixing the string - fail 
        
        // 10101010 odd 1 even 0
        // 01010101 odd 0  odd 1
//         int n = s.size();
//         int start_with_0 = 0;
//         int start_with_1 = 0;


//         for (int i = 0; i <n ; i++)
//         {
//             if (i%2 == 0) // even 
//             {
//                     if (s[i] == '0')
//             {
//                 start_with_1++;
//             }
//             else{
//                 start_with_0++;
//             }
//             }else{
//                 if (s[i]=='1')
//                 {
//                     start_with_1++;
//                 }else{
//                     start_with_0++;
//                 }
                
//             }
            
        
            

//         }
        
// return min(start_with_0,start_with_1);

//! Approach2 : start_with_0 = total_length of string - start_with_1 ;
int  n = s.size();
 int start_with_0 = 0;


        for (int i = 0; i <n ; i++)
        {
            if (i%2 == 0) // even 
            {
                    if (s[i] == '1')
            {
                start_with_0++;
            }
            
            
            }else{
                if (s[i]=='0')
                {
                    start_with_0++;
                }
                
            }
            
        
            

        }
        
return min(start_with_0,n-start_with_0);

    }
};
// @lc code=end

