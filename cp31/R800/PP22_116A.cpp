#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int l =t;
    vector<int> pas;

int max_passenger=0;
while(t--){
    int exit , enter;
    cin>>exit>>enter;
  
    max_passenger+=(enter-exit);
    pas.push_back(max_passenger);
    // max_passenger=max(max_passenger,max_passenger+enter -exit);
}
sort(pas.begin(),pas.end());
cout<<pas[l-1];

}