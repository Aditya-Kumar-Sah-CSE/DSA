#include<bits/stdc++.h>

using namespace std;
int main (){
   int t;
   cin>>t;
   int count=0;
   while(t--){
    int a,b,c;
    cin>>a>>b>>c;

    if(a&&b ||b&&c || c&&a){
        count++;
    }
   }
cout<<count<<endl;


return 0;
}