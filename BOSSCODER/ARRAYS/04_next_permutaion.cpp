
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

  int n = nums.size(),i = n -2,j=n-1;
       for(int x = 0 ; x<nums.size() - 1 ; x++){
        if(nums[x] <nums[x+1]){
            i = x;
            break;
        }
       }
       if(i == )
       j = upper_bound(nums.rbegin(),nums.rend(),nums[i]) - nums.rbegin();
       swap(nums[i], nums[j]);
       reverse(nums.begin() + i + 1 , nums.end());

// method 2
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int n = nums.size(), i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) i--;
    if (i >= 0) {
        int j = n - 1;
        while (nums[j] <= nums[i]) j--;
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());

             for (int x : nums) cout << x << " ";
    }
};
