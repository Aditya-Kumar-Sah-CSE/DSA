/*
 * @lc app=leetcode id=2706 lang=cpp
 *
 * [2706] Buy Two Chocolates
 */

// @lc code=start
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
sort(prices.begin(),prices.end());
// ! Approach1 : use sorting tc-n*log(n)
// if (prices[0] + prices[1]>money)
// {
//     return money;
// }


// return money - (prices[0] + prices[1]);

//! Approach 2 : tc - n;
int smallest = prices[0] , sec_smallest = prices[0];
for (int i = 0; i <prices.size(); i++)
{
    if (prices[i] < smallest)
    {
        sec_smallest = smallest;
        smallest=prices[i];
    }
    else{
        sec_smallest=min(sec_smallest,prices[i]);
    }
}

if ((smallest+sec_smallest) > money)
{
    return money;
}

return money - (smallest + sec_smallest);
    }
};
// @lc code=end

