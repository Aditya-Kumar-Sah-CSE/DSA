#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
  long long n,max;
    cin>>n;
    vector<int> s(n);
    for(int i =0 ;i<n;i++){
        cin>>s[i];
    }
  
sort(s.begin(),s.end());
max=s[n-1];
cout<<max<<endl;
}

}