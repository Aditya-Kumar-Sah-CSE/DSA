#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
vector<int> v(26,0);
 
for(char &ch:s){
    if(ch<92) ch+=32;
    v[ch-'a']=1;
}
for (int i = 0; i < 26; i++)
{
    if(v[i]==0){
         cout<<"No";
    return 0;
    }
}
cout<<"YES";

}