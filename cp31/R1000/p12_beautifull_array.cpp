#include<bits/stdc++.h>

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long n,k,b,s;
cin>>n>>k>>b>>s;
long long min_s = k*b , max_s = (k*b) + (k-1)*n;

if(s<min_s || s>max_s)
cout<<"-1"<<endl;
else{
    vector<long long> ans(n,0);
    ans[0]=min_s;
    s-=min_s;
    for (long long i = 0; i < n; i++)
    {
        long long add = min(k-1,s);
        ans[i]+=add;
        s-=add;
    }

    for (long long  i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}


}


}