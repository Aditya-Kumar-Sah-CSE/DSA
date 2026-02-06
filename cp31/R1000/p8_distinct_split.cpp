#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;
unordered_set<char> st;
vector<long long>pre_uni_count(n+1,0);
vector<long long>suf_uni_count(n+1,0);

for (long long  i = 1; i <=n; i++)
{
    st.insert(s[i-1]);
    pre_uni_count[i]=st.size();
}
st.clear();
for (long long  i = n; i >0; i--)
{
    st.insert(s[i-1]);
    suf_uni_count[i]=st.size();
}
st.clear();
long long ans = 0;

for(long long i =0;i<n;i++){
    ans= max(ans,(pre_uni_count[i] + suf_uni_count[i+1]));
}
cout<<ans<<endl;
}

    return 0;
}