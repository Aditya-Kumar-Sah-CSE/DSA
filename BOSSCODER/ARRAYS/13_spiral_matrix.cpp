class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n = matrix[0].size();
        int i,j;
        vector<int> v;
        int t =m*n;
        int count =0;
      int maxc =n-1,minr=0,maxr=m-1,minc=0;
        while(minr<=maxr && minc <= maxc  )
        {
            
         //for TOP : L to R
            for( j=minc;j<=maxc && t>count ;j++)
            {
                v.push_back(matrix[minr][j]);
                count++;  
            }
            minr++;
         // form Right : T to B
            // if(minr>=maxr || minc >= maxc){
            //         break;
            //     }
              
            for(i=minr;i<=maxr&& t>count;i++)
            {
                 v.push_back(matrix[i][maxc]);
                   count++;  
            }
             maxc--;
         // from bottom : R to L
            // if(minr>=maxr || minc >= maxc) {
            //  break;
            // }
                  
            for( j=maxc;j>=minc && t>count;j--){
            v.push_back(matrix[maxr][j]);
                   count++;   
            }
            maxr--;
            // if(minr>=maxr || minc >= maxc) {
            //  break;
            //         }
         // from left : B to T
            for(i=maxr;i>=minr && t>count;i--)
            {
            v.push_back(matrix[i][minc]);
                    count++;   
            }
            minc++;
        }  
        return v;
    }
};
