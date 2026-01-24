#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c0 = 0 , c1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0') c0++;
            else c1++;
            
        }
        int res = min(c0,c1);
        if(res&1) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
        
    }
 }
