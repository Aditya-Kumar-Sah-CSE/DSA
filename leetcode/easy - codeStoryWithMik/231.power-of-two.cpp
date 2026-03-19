/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        // ! Approach 1 : bit magic - all power 2 numbers are int form = 10000 and numbers - 1 : 01111 so if we take and get 0
        // return (n&(n-1))==0;

        // !Approach 2 :using recursion
// base case
    //    if(n==1) return true;

    //    return n%2 == 0 && isPowerOfTwo(n/2);

    // ! Approach 3: simple div
// if(n==1) return true;
//     // bool res = true;
//     while(n>0){
//         if(n==1) return true;
//         if(n%2!=0) return false;

//         n/=2;
//     }
//         return true;
// ! Approach 4 : built in function - return number of set bit 

// int count = __builtin_popcount(n);

// return count == 1;
// ! Approach 5 : -2^31>=num<=2^31 -1;
long long num = 1LL << 30;  
return num % n == 0;
    }
};
// @lc code=end

