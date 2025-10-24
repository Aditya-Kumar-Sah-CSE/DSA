
// using std
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
         for (int x : nums) cout << x << " ";
    }
};
// find i such that a[i] < a[i+1] - i;
// start from right find j - just greater than a[i] 
//swap(a[i] , a[j] );
// reverse- begin i+1 , end ;
