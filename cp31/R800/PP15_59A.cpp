#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
int n=s.size();
int count_sm=0;
for(int i=0;i<n;i++){
    if(s[i]>='a') count_sm++;
}
if (n-count_sm>count_sm)
{
    for (int i = 0; i < n; i++)
    {
        if(s[i]>='a') s[i]-=32;
    }
    
}
else{
      for (int i = 0; i < n; i++)
    {
        if(s[i]<'a') s[i]+=32;
    }
}
cout<<s;
return 0;

}