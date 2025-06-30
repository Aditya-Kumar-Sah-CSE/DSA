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
cout<<"Enter array element :\n ";
    for( i=0;i<m;i++){
        for(j=0;j<n;j++){
          cin>>a[i][j];
        }
        
    }
     
    // for( i=m-1;i>=0;i--){
    //     if(i%2==0){
    //         for(j=0;j<n;j++){
    //             cout<<a[i][j]<<" ";
    //         }
    //     }
    //     else
    //         for(j=n-1;j>=0;j--)
    //         {
    //             cout<<a[i][j]<<" ";
    //         }
    // }

    // wave 2
    for(j=0;j<n;j++){
        if(j%2==0){
            for( i=0;i<m;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else
            for( i=m-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
    }
 }

//  output
// Enter column array size: 3
// Enter array row size: 3
// Enter array element :
// 1 2 3
// 4 5 6
// 7 8 9

// 7 8 9 6 5 4 1 2 3 
// wave2
//  