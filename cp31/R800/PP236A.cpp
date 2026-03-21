#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
cin>>s;
vector<int> distinct_letters(26,0);

for (int i = 0; i < s.size(); i++)
{
    distinct_letters[s[i]-'a']=1;
}
int count=0;
for (int i = 0; i < 26; i++)
{
    if(distinct_letters[i]) count++;
}
if (count%2==0)
{
    cout<<"CHAT WITH HER!"<<endl;
}
else{
    cout<<"IGNORE HIM!"<<endl;
}

return 0;

}