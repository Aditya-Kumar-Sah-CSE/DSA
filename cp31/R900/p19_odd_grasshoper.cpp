#include<bits/stdc++.h>

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long st ,num_of_jump ;
    cin>>st>>num_of_jump;
    long long final = num_of_jump % 4 , ans = 0;
if(final == 0) ans =  0;
else if (final == 1) ans = -num_of_jump ;
else if(final == 2 ) ans = +  1;
else ans =  num_of_jump + 1;
if(st&1)
cout<<st - ans <<endl;
else 
cout<<st+ans<<endl;
}

    return 0;
}