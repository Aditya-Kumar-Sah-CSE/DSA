
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //     vector<int> rev(vector<int>& nums ,int i,int j){
    //         for(i,j;i<=j;i++,j--){
    //             int temp =v[i];
    //             v[i] =v[j];
    //             v[j]=temp;
    //         }
    //         return v;
    //    }
       if(k>nums.size()) k%=(nums.size());
       int i,j;
    //    nums=rev(nums,0,nums.size()-1-k);
  for(i=0,j=nums.size()-1-k;i<=j;i++,j--){
                int temp =nums[i];
                nums[i] =nums[j];
                nums[j]=temp;
            }
    //    nums=rev(nums,nums.size()-k,nums.size()-1);
    for(i=nums.size()-k,j=nums.size()-1;i<=j;i++,j--){
                int temp =nums[i];
                nums[i] =nums[j];
                nums[j]=temp;
            }
    //    nums=rev(nums,0,nums.size()-1);
       for(i=0,j=nums.size()-1;i<=j;i++,j--){
                int temp =nums[i];
                nums[i] =nums[j];
                nums[j]=temp;
            }
            for(i=0;i<nums.size()-1;i++)
            cout<<nums[i];
    }
};