#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
long long a , b;
cin>>a>>b;
int a_layer = log2(a) , b_layer = log2(b); 

 a_layer = a_layer == 0 ? 1 :a_layer ;
 a_layer = a_layer & 1 && a_layer > 1 ? a_layer -1 :a_layer ;
 b_layer = a_layer < 2 ? 1 :a_layer ;
 a_layer = a_layer & 1 && a_layer > 1 ? a_layer -1 :a_layer ;




}


    return 0;
}