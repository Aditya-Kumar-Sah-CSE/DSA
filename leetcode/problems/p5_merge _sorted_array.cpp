class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i=m-1, k= m+n-1,j=n-1; k >=0; k--)
        {
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else
             nums1[k]=nums1[j];
                j--;

        }
        
    }
};