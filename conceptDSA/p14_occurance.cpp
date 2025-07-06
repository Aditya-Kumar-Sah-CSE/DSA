#include<iostream>
#include<vector>
using namespace std;
int main(){
string s ="leetcode";
 vector<int> v(26,0);
for (int i = 0; i < s.length(); i++)
{
   char ch = s[i];
   int ascii = (int)ch;
   v[ch-97]+=1;
}
int max=0;
for (int i = 0; i < 26; i++)
{
    if(v[i]>max) max = v[i];
}
for (int i = 0; i < 26; i++)
{
    
    if(v[i]==max) {
char ch = (char)(i+97);
cout <<ch<< max;
    };
}
}
