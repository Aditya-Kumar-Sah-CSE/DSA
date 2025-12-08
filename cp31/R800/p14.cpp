#include<bits/stdc++.h>
using namespace std;

int main(){
int t ;
cin>>t;
while(t--){
 long long a , b , c ;
 cin>>a>>b>>c;
 if(c % 2 != 0 ){
    if(b>a){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
 }
 else{
        if(b<a){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
 }


}

    return 0;
}

// 1s = 10^8 ops
// t~ 10^4
// op/test = 10^4
// n ~ 10^9

//  a b c - should decrease first 
// parity 
// Anna C is even 0 - Anna
// Anna a= will dec 
// kitt b=will dec

//  b>=a a will dec first - kitte win

//  a> b then anna win
// anna c is Odd 0  -  kattie 

// jo start kre ga game if uske pass greater button hoga to woo jite ga 
