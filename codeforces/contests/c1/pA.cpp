#include<bits/stdc++.h>

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n ,a , b;
    cin>>n>>a>>b;
    if(((n % 2) ==( a%2) )&& (b%2 == n%2)){
        cout<<"yes"<<endl;
    }  
    else{
        cout<<"no"<<endl;
    }

}


}