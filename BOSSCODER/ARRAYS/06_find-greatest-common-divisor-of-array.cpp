// m1
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int n = nums.size();
        

        return __gcd(nums[0],nums[n-1]) ;
        
    }
};

// m2
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res = 1,f=nums[0],n = nums.size();
        for(int i = 1 ; i<= f;i++){
            bool all = true;
        
                if(f%i != 0|| nums[n-1]%i !=0)
                {
                    all =false;
                }
            
            if(all){
                res = i;
            }
        }

        return  res;
        
    }
};
