#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int> a(n)  ;
    for(int i=0;i<n;i++)//n
    cin>>a[i];
    //prefix sum is odd
    
    sort(a.begin(),a.end());
   int  count = 0;
   int sum=0;
   bool even = false;
   for(int i=0;i<n;i++){
      sum+=a[i];
     if(sum%2 == 0){
    even= true;
        break;
   }
}
  if(even){
    cout<<"No"<<endl;
    
  }
else
    cout<<"Yes"<<endl;    
 
 

    
 }
 return 0;
}