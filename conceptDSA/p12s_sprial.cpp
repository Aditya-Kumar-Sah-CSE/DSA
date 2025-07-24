#include<iostream>

using namespace std;
int main(){

 
 int m, n,i,j;
 cout<<"Enter column array size: ";
 cin>>m;
 cout<<"Enter array row size: ";
 cin>>n;
int a[m][n];
cout<<"Enter array element : \n";
    for( i=0;i<m;i++){
        for(j=0;j<n;j++){
          cin>>a[i][j];
        }
        
    }
    int count=n*m;
    int maxc = m-1,minr=0,maxr=n-1,minc=0;
     while(minr<=maxr && minc <= maxc){
        // if(minr<=maxr || minc <= maxc) break;
        //for TOP : L to R
    for( j=minc;j<=maxc ;j++){
        cout<<a[minr][j]<<" ";
        // count--;
            }
            minr++;
        // form Right : T to B
         if(minr<=maxr || minc <= maxc) break;
            for(i=minr;i<=maxr;i++)
            {
                cout<<a[i][maxc]<<" ";
                //  count--;
            }
            maxc--;
            // from bottom : R to L
            for( j=maxc;j>=minc;j--){
             cout<<a[maxr][j]<<" ";
            //   count--;
            }
            maxr--;
             if(minr<=maxr || minc <= maxc) break;
            // from left : B to T
            for(i=maxr;i>=minr;i--)
            {
                cout<<a[i][minc]<<" ";
                //  count--;
            }
            minc++;
}
 }