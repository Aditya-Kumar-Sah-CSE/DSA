#include<bits/stdc++.h>
using namespace std;

int main(){
string s,t;
cin>>s>>t;
for (int i = 0; i < s.size(); i++)
{
    int a = s[i];
    int b=t[i];
    int c= a^b;
    cout<<c;
}


}