#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;

        cin>>n;
vector<long long> arr(n);
int count_0 =0 , count_1 =0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(arr[i]== 0) count_0++;
            else if(arr[i]== 1) count_1++;
        }
        long long result = pow(2,count_0)*count_1;
        cout<<result<<endl;
    }
        return 0;

    }