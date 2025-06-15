#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<int> v;
 int n,i,j;
 cout<<"Enter array size: ";
 cin>>n;

cout<<"Enter array element : ";
    for( i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
     
 for( i=0;i<n;i++)
cout<<v[i]<<" ";
}
