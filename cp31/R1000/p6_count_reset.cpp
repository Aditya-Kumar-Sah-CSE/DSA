#include<bits/stdc++.h>

using namespace std;

int main (){

int t;
cin>>t;
while(t--){
    long long n ,k,q;
    cin>>n>>k>>q;
    vector<long long> v(n);
    for(long long i = 0;i<n;i++){
        cin>>v[i];
    }
    for (long long i = 0; i < n; i++)
    {
        if(v[i]<=q){
            v[i]=1;
        }
        else{
            v[i] = 0;
        }
    }
    // for (long long i = 0; i < n ; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    // int max_c_c_1 = 0;
        int count = 0;
        long long ans =0;
    for(long long i=0; i<n;i++){
    
        if(v[i] == 1){
count++;
// max_c_c_1=max(max_c_c_1,count);
        }
        else{
// max_c_c_1 = max_c_c_1>k?max_c_c_1 + 1 - k:0;
if(count > k) {
    count =count + (1-k);

ans+=(count*(count + 1))/2;
}
            count=0;
        }
    }





// long long ans = (max_c_c_1 * (max_c_c_1 + 1)) / 2;

// cout<<max_c_c_1<<endl;
// ans = (ans > 0 ? ans : 0);
cout<<ans<<endl;

}


    return 0;
}