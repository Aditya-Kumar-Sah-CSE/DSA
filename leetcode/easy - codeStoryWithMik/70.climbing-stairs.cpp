/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */
//! Approach 2 
// int t[46];
// int solve(int n){
//     if(n<0);

// if(t[n] != -1)
//     return t[n];

//     if(n==0) return 1;

//     int one_step = solve(n-1);
//     int two_step = solve(n-2);

//     return t[n] = one_step + two_step;
// }
// ! approach 1
// int solve(int n){
//     if(n<0);

//     if(n==0) return 1;

//     int one_step = solve(n-1);
//     int two_step = solve(n-2);

//     return one_step + two_step;
// }

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        // ! Approach 1 : brute force
        // return solve(n);

        // ! menorization - 

        // memset(t,-1,sizeof(t));
        // return solve(n);

        // ! Approach 3

        if (n==1 && n ==2) return n;

        int a = 1 ;// i-2 || n= 1
        int b = 2;
        int c = 3;

        for (int i = 3; i <= n; i++)
        {
            c = a+b;
            a =b;
            b = c;

        }
        return c;
    }
};
// @lc code=end

