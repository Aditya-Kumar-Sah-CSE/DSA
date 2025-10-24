class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
                       vector<int> v;
                       int m = nums1.size(), n = nums2.size();
                       double res;
                       for(int i =0;i<nums1.size();i++){
                        v.push_back(nums1[i]);
                       }
                       for(int i =0;i<nums2.size();i++){
                        v.push_back(nums2[i]);
                       }
                       sort(v.begin(),v.end());
                       int val = n + m ;
                       if( val % 2 == 0){
                        
                        res =( v[val/2] + v[(val/2) - 1])/2.0;
                       }else res = v[(n+m)/2];

                       return res;

        
    }
};
