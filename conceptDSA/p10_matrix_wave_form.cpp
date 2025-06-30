#include<iostream>
#include<vector>
using namespace std;
int main(){

 
 int m, n,i,j;
 cout<<"Enter column array size: ";
 cin>>m;
 cout<<"Enter array row size: ";
 cin>>n;
int a[m][n];
cout<<"Enter array element : ";
    for( i=0;i<m;i++){
        for(j=0;j<n;j++){
          cin>>a[i][j];
        }
        
    }
     
    for( i=0;i<n;i++){
        if(i%2==0){
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else
            for(j=n-1;j>=0;j--)
            {
                cout<<a[i][j]<<" ";
            }
    }
 }