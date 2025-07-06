#include<iostream>
#include<vector>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n,s;
cin>>n>>s;
vector<int> v(n);
for (int i = 0; i < n; i++)
{
   cin>>v[i];
}
if(n==1) {
    cout<<abs(s-v[0])<<endl;
    
}
else if(s<=v[0]){
    cout<<v[n-1]-s<<endl;
}
else if(s>=v[n-1]){
    cout<<s-v[0]<<endl;
}
else{
 int f = abs(s -v[0]) ,l=abs(v[n-1] -s) ;
 
int min = f<=l ?f :l;
 cout<<v[n-1]-v[0] +min<<endl;   
}

}


return 0;
}