/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:

int solve(int n , vector<int>& dp){
    if(n<= 1) return n;
if(dp[n] != -1) return dp[n];

return dp[n] = solve(n-1,dp)+solve(n-2,dp);

}



    int fib(int n) {

        // ! Approach 2 : recursion + memorization
        //  if (n<=1)
        //  {
        //     return n;
        //  }
         
        //  vector<int> dp(n+1,-1);


        //  return solve(n,dp);

// ! Approach 4: bottom up - tc = n and sc = 1;

   if(n<=1) return n;
        
int a = 0 , b=1,c;
for (int i = 2; i <=n; i++)
{
    c=a+b;
    a=b;
    b=c;
    
}

return c;
// // ! Approach 3: bottom up - tc = n and sc = n;

//    if(n<=1) return n;
//         vector<int> dp(n+1);
// dp[0] = 0;
// dp[1] = 1;
// for (int i = 2; i <=n; i++)
// {
//     dp[i]=dp[i-1] + dp[i-2];
// }

// return dp[n];
// ! Approach 1 : only recursion tc=2^n

        // if (n<=1)
        // {
        //     return n;
        // }
        
        // return fib(n-1 ) + fib(n-2);
    }
};
// @lc code=end

