#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
int i=0,j=s.size()-1;

while (i<j)
{
    // swap(s[i],s[j]);
char temp = s[i];
s[i]=s[j];
s[j]=temp;

    i++;
    j--;
}

if(s==t) cout<<"YES";
else cout<<"NO";

}