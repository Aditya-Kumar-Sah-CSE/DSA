#include<bits/stdc++.h>
using namespace std;

int main(){
int t ;
cin>>t;
while(t--){
    string s;
    cin>>s;
int c0 = 0 , c1=0;
    for (int i = 0; i < s.size(); i++)
    {
      if(s[i] == '0')  c0++;
    else
        c1++;
    }
int new_s_l=0;
for (int i = 0; i < s.size(); i++)
{
    if(s[i]=='0' && c1>0){
         c1--;
         new_s_l++;
    }
    else if(s[i] == '1' && c0>0){
        c0--;
       new_s_l++;
    } 
    else break;
}

    cout<<(s.size()) - new_s_l<<endl;
}


    return 0;
}