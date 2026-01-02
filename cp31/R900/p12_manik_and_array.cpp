#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    vector<long long> a(n);

    for(long long i = 0 ; i<n ; i++){
        cin>>a[i];
    } 
    if(a.size() == 1) cout<<0<<endl;

else{ 
    long long ans = a[n-1]-a[0];
//!when a(1) is fixed
        for(int i = 1 ; i<n ; i++){
        ans = max(ans , (a[i] - a[0]));

        }
//!when a(n) is fixed
        for(int i = 0 ; i<n-1 ; i++){
        ans = max(ans , (a[n-1] - a[i]));

        }
       //!when a(1) is fixed
        for(int i = 0 ; i<n-1 ; i++){
        ans = max(ans , (a[i] - a[i+1]));

        }
      
cout<<ans<<endl;
    
}
}

    return 0;
}