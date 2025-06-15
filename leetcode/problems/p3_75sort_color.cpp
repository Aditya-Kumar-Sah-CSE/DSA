class Solution {
public:
    void sortColors(vector<int>& nums) {
        int o=0,one=0,t=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i] == 0) 
            o++;
            else if(nums[i] == 1) 
            one++;
            else
            t++;
        }
        for(int i=0; i<nums.size();i++){
            if(i<o) nums[i] = 0;
            else if(i>=o && i< o + one)  nums[i] = 1;
            else
            nums[i] = 2;
        }
        for(int i=0; i<nums.size();i++)
            cout<<nums[i];
    }
};