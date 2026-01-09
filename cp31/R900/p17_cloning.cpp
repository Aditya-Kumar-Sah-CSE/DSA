#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
vector<long long> a(n);
for (long long i = 0; i < n; i++)
{
    cin>>a[i];
}
map<long long , long long > mp;
for (long long i = 0; i < n; i++)
{
  mp[a[i]]++;
}

long long curr_fr_max =0;

for(auto i : mp){
    curr_fr_max = max(curr_fr_max,i.second);
}
long long op = 0;

while(curr_fr_max<n){
op++; //!clone
if(curr_fr_max*2<=n){
    op+=curr_fr_max;
    curr_fr_max*=2;
}else{
    op+=(n-curr_fr_max);
    curr_fr_max=n;
}


}
cout<<op<<endl;

    }
}