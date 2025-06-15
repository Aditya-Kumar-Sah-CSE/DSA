#include<iostream>

using namespace std;

int main(){
int t;
cin>>t;
    while(t--){
    int a,b,c,s,e;

    cin>>a>>b>>c;
s=a+b+c;
e = s/3;
if(s%3 == 0 && a<=e && b<=e )
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
    }


return 0;
}