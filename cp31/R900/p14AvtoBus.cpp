#include<bits/stdc++.h>
using namespace std;

int main(){

int t ;
cin>>t;
while(t--){
long long n;
cin>>n;

if(n<4 || n&1) cout<< -1<<endl;
else{
    long long min = ceil(n*1.0 / 6) , max = n / 4 ;
cout<<min<< " " <<max<<endl;
}
}
    return 0;
}
