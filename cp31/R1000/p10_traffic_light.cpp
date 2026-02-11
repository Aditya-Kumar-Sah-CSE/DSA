#include<bits/stdc++.h>

using namespace std;

int main(){

int t;
cin>>t;
while(t--){
long long n;
char c ;
string s;


cin>>n>>c;
cin>>s;
s+=s;
n*=2;


long long idx = -1 , ans = INT_MIN;

for (long long i = n-1; i >=0; i--)
{
    if(s[i] == 'g') idx = i;

    if(s[i] == c){
        long long dif = idx - i;
ans = max(ans,dif);
    } 
}

cout<<ans<<endl;



}

    return 0;
}