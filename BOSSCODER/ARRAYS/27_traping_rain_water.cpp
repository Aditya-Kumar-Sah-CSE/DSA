class Solution {
public:
    int trap(vector<int>& height) {
        
        int max=-1,s=height.size(),i;
        vector<int> arr(s);
        
        for( i=0;i<s;i++){
            arr[i]=max;
            if(max<height[i])
            max = height[i];
        }
        arr[s-1]=-1;
        max =-1;
        for( i =s-1;i>=0;i--){
            if (max<arr[i]) arr[i]=max;
            if(max<height[i] )
            max = height[i];
        }
        arr[s-1]=-1;
        
        int sum =0;
        for( i =0;i<s;i++){ 
            if(height[i]<arr[i])
            sum +=(arr[i]-height[i]);
        }
        return sum;
    }
};

// m2
class Solution {
public:
    int trap(vector<int>& height) {
        
        int n =height.size(),i,j,k,ans=0;
        vector<int> lmax(n,0),rmax(n,0);
        lmax[0] = height[0] ; rmax[n-1] = height[n-1];
        
        for( i=1;i<n;i++){
           lmax[i] = max(lmax[i-1],height[i]);
        }
      
        for( j =n-2;j>=0;j--){
           rmax[j] = max(rmax[j+1],height[j]);
        }
    
        for( k =0;k<n;k++){ 
          ans+=min(lmax[k],rmax[k]) - height[k];
        }
        return ans;
    }
};

// m3
class Solution {
public:
    int trap(vector<int>& height) {
        
        int n =height.size(),l=0,r=n-1,lmax=0,rmax=0,ans=0;
       
        
        while(l<r){
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);
            if(lmax < rmax){
                ans+=lmax - height[l];
                l++;
            }
            else{
                ans+=rmax  - height[r];
                r--;
            }

        }
        return ans;
    }
};
