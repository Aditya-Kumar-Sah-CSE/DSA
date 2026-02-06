#include<bits/stdc++.h>


using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long> a(n),b(n);
    for(long long i =0;i<n;i++){
        cin>>a[i];
    }

    for(long long i =0;i<n;i++){
        cin>>b[i];
    }

 
        unordered_map<long long, long long> freq;

        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
            freq[b[i]]++;
        }

        long long ans = 0;
        for (auto &it : freq) {
            ans = max(ans, it.second);
        }

        cout << ans << "\n";
}



    return 0;
}