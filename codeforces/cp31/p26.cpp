// //a = {a1,a2,....,a3}
// reorder these elements
// beautiful array

// prefix length >=2
// {a1,a2} -- 2 , gcd(a1,a2)<= 2
// {a1,a2,a3} -- 3 gcd(a1,a2,a3) <= 3
// {a1,a2,a3,a4} -- 4
// {a1,a2,a3,...,an} -- n gcd(a1,..an) <= n

// 1s = 10^8 ops
// 1 test = 1s = 10^8 ops
// ops/test = 10^8 / 500 = 2 * 10^5 ops

//  n = 100 
// O(n^3) X below all 
// gcd(a,b) <= min(a,b)" gcd is always decreasing  "

// a = {x,y ,...}
// x,y -- 2 good 
// x,y,a3 <=2
// decreases down

#include<bits/stdc++.h>
using namespace std;
int main(){
int t ;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i =0 ; i<n;i++){
        cin>>a[i];
    }
    int flag = 0;
    for(int i = 0 ; i<n;i++){
        for(int j = i ;j<n;j++){
            if(__gcd(a[i],a[j])<=2){
                flag = 1;
            }
        }
    }
    if(flag == 0){
        cout<< " no "<<endl;
    }
    else{
        cout<< "YES"<<endl;
    }
}
    return 0;
}