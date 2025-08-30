#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a,b,c,d;
        cin>>a>>b>>c>>d;
        long long s = 0 ,res;
        s = abs(d - b);
        a +=s;
        // piche hi ja sakte h aghe nhi 
        s+=abs(a-c);
       if(d<b || c>a){
        res = -1;
       }
       else{
        res = s;
       }
       cout<<res<<endl;

    }
}