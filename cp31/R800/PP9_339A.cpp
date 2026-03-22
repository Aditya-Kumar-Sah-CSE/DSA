#include<bits/stdc++.h>


using namespace std;
int main(){
string s;
cin>>s;
int count1=0,count2=0,count3=0;

for (int i = 0; i < s.size(); i+=2)
{
    if(s[i] =='1') count1++;
    else if (s[i]=='2') count2++;
    else count3++;
}
for (int i = 0; i < s.size(); i+=2)
{
    if(count1>0){
        s[i] = '1';
        count1--;
    }
    else if (count2>0)
    {
          s[i] = '2';
        count2--;
    }else{
          s[i] = '3';
        count3--;
    }
    
}

    
 cout<<s<<endl;

return 0;
}