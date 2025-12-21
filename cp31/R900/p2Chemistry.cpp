#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
long long n,k;
cin>>n>>k>>s;

vector<int> v(26,0);

for(int j = 0 ; j < n ; j++){
    v[s[j] - 'a']++;
}

long long odd_fr =0;
for(int j = 0 ; j < 26 ; j++){
   if(v[j] % 2 != 0) odd_fr++;
}

if(odd_fr <= k+1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;



    }
return 0 ;

}
