#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int drink = k*l;
int lime = c*d;
int salt = p ;
int num_drink = drink / nl;
int num_salt = salt / np;
int total_toast = num_drink<lime ?(num_drink<num_salt?num_drink:num_salt):(lime<num_salt?lime:num_salt);

// cout<<total_toast<<"\n";
cout<<total_toast/n;


    return 0;
}