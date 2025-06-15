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
     cout<<"enter both index : ";
     cin>>i>>j;
    while(i<=j)
   {
    int temp =v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
}
 for( i=0;i<n;i++)
cout<<v[i]<<" ";
}

