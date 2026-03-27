#include<bits/stdc++.h>
using namespace 
std;
int main()
{
  int t;
  cin>>t;
  string s , ls="";
  int group=1;
while (t--)
{
    cin>>s;
    if(ls[1]==s[0]) group++;
    ls=s;
}
cout<<group;
} 

