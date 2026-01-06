#include<bits/stdc++.h>
using namespace std;

int main (){
int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>v[i];
    }
    
long long ans=0;

for (int i = n-2; i >= 0; i--)
{
    /* code */
while(v[i] >= v[i+1]){
ans++;
v[i]/=2;
if(v[i]==0 ) break;
}
if(v[i]==0 && v[i+1] ==0) {
    ans = -1;
break;

}

}

cout<<ans<<endl;



}


    return 0;
}