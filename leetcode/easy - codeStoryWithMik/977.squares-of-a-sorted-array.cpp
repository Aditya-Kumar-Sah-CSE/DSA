/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // ! Approach 1 : tc = log(n) with sorting
// for(int i=0;i<nums.size();i++){
// nums[i]*=nums[i];
// }
// sort(nums.begin(),nums.end());
//         return nums;


// ! Approach 2 : without sorting 
vector<int> result(nums.size());
 int n =nums.size();
int i =0 ,j=n-1;
int k=n-1; //for filling in result
while(k>=0){
    int a = nums[i]*nums[i];
    int b = nums[j]*nums[j];
    if(a>b){ 
        result[k]=a; 
        i++;
       
    }
    else{
        
        result[k]=b;
        j--;

    }
     k--;
}
return result;

    }
};
// @lc code=end

