#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        // if factor other then 2and 3 return -1
        // if 2s > 3s return -1
        // else return num (3s) + num (3s-2s)

long long count2 =0,count3=0;
while(n>0 && n%2==0){
    count2++;
    n/=2;
}
while(n>0 && n%3==0){
    count3++;
    n/=3;
}
if(n>1 || count2> count3) cout<<-1<<endl;
else{
    cout<<count3 +(count3 - count2) << endl;
}


    }
}