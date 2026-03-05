/*
 * @lc app=leetcode id=1582 lang=cpp
 *
 * [1582] Special Positions in a Binary Matrix
 */

// @lc code=start
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        //!approach1 - brustforce
// int row = mat.size();
// int col = mat[0].size();
// int count=0;
//         for (int i = 0; i < row; i++)
//         {
//            for (int j = 0; j < col; j++)
//            {

//             if(mat[i][j] == 0) continue;

//             bool special = true;

//            // check col for 1
//            for (int k = 0; k < row; k++)
//            {
//                if (k!=i && mat[k][j]==1)
//                {
//                    special= false;
//                    break;
//                 }
                
//             }
//             // check col for 1
//             for (int k = 0; k < col; k++)
//             {
//                 if (k!=j && mat[i][k]==1)
//                 {
//                     special= false;
//                     break;
//                  }
                 
//              }
                

//              if (special)
//              {
//                 count++;
//              }
             
//             }
            
//            }
           
//         return count;
        
//! Approach2
int m = mat.size();
int n = mat[0].size();

vector<int> rowCount(m,0);
vector<int> colCount(n,0);
for (int row = 0; row < m; row++)
{
    for (int col = 0; col < n; col++)
    {
        if (mat[row][col] == 1)
        {
            rowCount[row]++;
            colCount[col]++;
        }
        
    }
    
}

int count = 0;
for (int row = 0; row < m; row++)
{
    for (int col = 0; col < n; col++)
    {
        if (mat[row][col] == 1 && rowCount[row] == 1 && colCount[col] == 1)
        {
            count++;
        }
    }
}

return count;




    }
};
// @lc code=end

