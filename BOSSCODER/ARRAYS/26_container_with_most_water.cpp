class Solution {
public:
    int maxArea(vector<int>& height) {
        int l= height.size();
        vector<int> v(l);
        int i,j,min=0;
        for(i=0;i<l;i++){
            int count = l-i-1;
            v[i]=0;
         for(j=l-1;j>i&& min<height[j];j--){
            
             min = height[i]<height[j]?height[i]:height[j];
            int w = min * count ;
            count--;
            if(v[i]<w)
            {
                v[i]=w;
            }
         }

        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};

// m2
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l= height.size();
        int lp = 0 , rp = l-1;
        long long ans = 0;
        while(lp<rp){
            long long max_water = min(height[lp],height[rp]) * (rp - lp);
            ans = max(ans,max_water);

            // jo pointer chota hoga usko forwad kre ge
            height[lp]<height[rp]?lp++:rp--;
        }
      return ans;
    }
};
