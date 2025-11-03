class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int l = 0 , r = numbers.size()-1;
        while(l<r){
            int sum = numbers[r] + numbers[l];
            if(target == sum){
                v.push_back(l+1);
                v.push_back(r+1);
                // return will terminate TLE
                return v;
            }
            else if(target<sum) r--;
            else l++;

        }
        return v;
    }
};
