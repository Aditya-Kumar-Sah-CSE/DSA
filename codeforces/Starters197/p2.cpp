#include<iostream>
#include<vector>

using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n)  ;
    for(int i=0;i<n;i++)//n
    cin>>a[i];
    
   int  count = 0;
   for(int i=0;i<n;i++){
     if(a[i]>=x && a[i]<=y){
        count++; 
   }
}
    cout<<count<<endl;    


    
 }
 return 0;
}