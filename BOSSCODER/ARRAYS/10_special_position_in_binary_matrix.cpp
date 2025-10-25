class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int sum =0;
        for(int i = 0 ; i<mat.size();i++){
            int rows=0,n=0;
            for(int j = 0 ; j<mat[0].size();j++){
                if(mat[i][j] == 1){
                    n = j;
                }
               rows+=mat[i][j];
            }
            int clms = 0 ;
            for(int k = 0; k<mat.size()&& n<mat[0].size();k++){
                clms+=mat[k][n];
            }
            n++;
            if(rows == 1 && clms == 1){
                sum++;
            }
        }
        return sum;
    }
};
