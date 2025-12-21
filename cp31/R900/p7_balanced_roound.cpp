#include<bits/stdc++.h>

using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long n,k;

        cin>>n>>k;

   vector<long long> v(n);

   for (int i = 0; i < n; i++)
   {
    /* code */
    cin>>v[i];
   }
   int max_length =0,count =0;
   sort(v.begin(),v.end());
   for (int i = 0; i < n-1; i++)
   {
    /* code */
    if(v[i+1] - v[i] <= k) {
        count++;
        max_length = max(max_length,count);
        
    }
    else count =0;
   }
   
cout<<n - max_length -1 <<endl;

         

    }


}