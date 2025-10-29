class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_set<int> st;

        int start = 0 , end = 0 ;
        while(end<n){

     //step1 - check window size less than or equal to  else erase nums[start] increase start - decrease window size
    if(abs(start-end)>k){
        st.erase(nums[start]);
        start++;//shrink
    }                                                                                      // past me dikha h ya nhi 
    if(st.find(nums[end]) != st.end()){
        return true;
    }
//insert value and increase end
        st.insert(nums[end]);
        end++;

        }
        return false;
        
    }
};
