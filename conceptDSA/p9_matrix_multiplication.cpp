#include<iostream>
#include<vector>
using namespace std;
int main(){


 int m,n,p,q,i,j;
 cout<<"Enter  column size of array1: ";
 cin>>m;
 cout<<"Enter  row size of array1: ";
 cin>>n;
int v1[m][n];
 cout<<"Enter array element : ";
    for( i=0;i<m;i++){
        for (j = 0; j < n; j++)
        {
           cin>> v1[i][j];
        
        }
        
       
    }
 cout<<"Enter  column size of array2: ";
 cin>>p;
 cout<<"Enter  row size of array2: ";
 cin>>q;

 if(n==p){
    int v2[p][q];
    cout<<"Enter array element : ";
for( i=0;i<p;i++){
        for (j = 0; j < q; j++)
        {
        cin>>  v2[i][j];
    }
 }

int res[m][q];

for( i=0;i<m;i++){
        for (j = 0; j < q; j++)
        {
            res[i][j]=0;
            for (int k= 0; k <n ; k++)
            {
               res[i][j]+=v1[i][k]*v2[k][j];
            }
            
        
    }
 }
for( i=0;i<m;i++){
        for (j = 0; j < q; j++)
        {
         cout<< res[i][j]<<" ";
    }
    cout<<endl;
 }
}
 else 
  cout<<"The matrix multiplication can't possible"<<endl;
  
 
     return 0;
 
}
