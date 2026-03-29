#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> s(4);
for (int i = 0; i < 4; i++)
{
    /* code */
    cin>>s[i];
}
sort(s.begin(),s.end());
int count=0;
for (int i = 0; i < 3; i++)
{
    if(s[i]!=s[i+1]) count++;
}
cout<<3-count;
}