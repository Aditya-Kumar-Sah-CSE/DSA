/*
 * @lc app=leetcode id=1422 lang=cpp
 *
 * [1422] Maximum Score After Splitting a String
 */

// @lc code=start
class Solution {
public:
    int maxScore(string s) {
//! Approach 1 : brut force

        // int res=INT_MIN;
//         for (int i = 0; i < s.size()-1; i++)
//         {
//             int count0 = 0 , count1 =0;
//             for (int j = 0; j <=i; j++)
//             {
//                 /* code */
// if (s[j]=='0')
// {
//     /* code */
//     count0++;
// }



//             }
// for (int l=i+1; l < s.size(); l++)
// {
//     /* code */
// if (s[l]=='1')
// {
//     /* code */
//     count1++;
// }


// }
// res = max(res , (count0+count1));

            
//         }
//         return res;

// ! Approach 2 :
// int n = s.length();
// int result = INT_MIN;
// int total_ones = count(begin(s),end(s),'1');

// int zeros = 0;
// int ones = 0;
// // right_ones = total_ones - left_ones

// for (int i = 0; i < n; i++)
// {
//     /* code */
// if (s[i] == '1')
// {
//     ones++;
// }
// else{
//     zeros++;
// }
// int right_ones = total_ones - ones;

// result = max(result,zeros+right_ones);


// }
// return result;


// ! approach 3 : score = zero_left + ones_right;

int n = s.size();
int score = INT_MIN;

int zeros = 0;
int ones = 0,i;

for ( i = 0; i < n-1; i++)
{
    /* code */
    if (s[i]== '1')
    {
        /* code */
        ones++;
    }
    else{
        zeros++;
    }
    score = max(score,zeros-ones);
}
if (s[i] == '1')
{
    ones++;
}

return score + ones;
    }
};
// @lc code=end

