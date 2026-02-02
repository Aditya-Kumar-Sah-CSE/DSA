#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<long long> se_e;
        long long l_fst_min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            long long m;
            cin>>m;
            vector<long long> a(m);
            for(auto &x : a)
            cin>>x;
            sort(a.begin(),a.end());

            se_e.push_back(a[1]);
            l_fst_min = min(l_fst_min,a[0]);
        }
        sort(se_e.begin(),se_e.end());

        long long sum_s_e = accumulate(se_e.begin(),se_e.end(),0LL);
        long long low_s_e = se_e[0];
        long long ans = l_fst_min + sum_s_e - low_s_e;
        cout<<ans<<endl;
        
    }


    return 0;
}