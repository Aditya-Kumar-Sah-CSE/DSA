#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        long long min_val = arr[0];
        for (int i = 1; i < n; i++)
        {
            min_val &= arr[i];
        }
        cout<<min_val<<endl;
    }
    return 0;
}
