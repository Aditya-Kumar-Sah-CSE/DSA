#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
int l = s.size();

if(s[0] == s[l-1]) cout<<s<<endl;
else {
    s[l-1] = s[0];
    cout<<s<<endl;

}



}

return 0;

}