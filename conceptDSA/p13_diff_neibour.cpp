#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s ;
    cin>>s;
int n= s.size(),i ,count =0;
    for ( i = 0; i <n; i++)
    {
       if(n==1) break;
    else if (n==2 && s[0]!=s[1])
    {
        count++;
        break;
    }
    
        else if (i==0)
        {
            if (s[i] != s[i+1])
            {
            count++;
            }
            
        }
        else if (i==n-1)
        {
            if (s[i] != s[i-1])
            {
            count++;
            }
        }
        else if (s[i]!=s[i+1] && s[i]==s[i-1])
        {
            count++;
        }
}
cout<<count;
}