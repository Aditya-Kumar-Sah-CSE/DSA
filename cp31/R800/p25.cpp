#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while (t--)
 {
    /* code */
    int n;
    cin>>n;
    string s;
    cin>>s;

    
    int count =n;
    for(int i = 0,j=n-1;s[i] != s[j] && i<j ; i++,j-- ){
        count-=2;
    }

    cout<<count<<endl;
 }
 

    return 0;
}