#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<vector<int>> grid;
 int m, n,i,j;
 cout<<"Enter array size: ";
 cin>>m,n;

cout<<"Enter array element : ";
    for( i=0;i<m;i++){
          for( j=0;j<n;j++){
        int t;
        cin>>t;
       grid[i].push_back(t);
    }
}
 for (int i = 0; i < m; i++)
 {
    if(grid[i][0]){
        for (int j = 0;j < n;j++)
        {
            grid[i][j] = (grid[i][j] == 0)?1:0;
        }
        
    }
 }
    for( j=1;j<n;j++){
        int count=0;
        for( i=1;i<m;i++){
          if(grid[i][j]==0)
            count++;
          }
          if(count<=(m/2)){
            for (int i = 0;i < n;i++)
        {
            grid[i][j] = (grid[i][j] == 0)?1:0;
        }
          }
        }

        int sum =0,x=1 ;
        for( i=0;i<m;i++){
          for( j=n-1;j>0;j--){
        sum+=grid[i][j]*x;
        x*=2;

          }

 
}
}