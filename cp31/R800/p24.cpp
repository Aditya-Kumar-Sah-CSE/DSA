// a ^ a = 0
// a ^ 0 = a

// 1tc = 10^8 ops
// 1 test = 1s =10^8
//ops/test = 10^8 / 1000 = 10^5
// n = 1000 
// O(n*sqrt(n))



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
 long long n;
 cin>>n;
 long long a[n];
 for(int i =0 ;i<n;i++){
    cin>>a[i];

 }
 long long t_xor = 0;
 for(int i = 0;i< n ; i++){
    t_xor^=a[i];
 }
// even all paired  0 hai to thik nhi  to -1
// odd h to t_xor
 if(n%2 == 1){
    cout<<t_xor<<endl;
 }
 else{
    if(t_xor == 0){
        cout<<0<<endl;
    }
    else
    cout<<-1<<endl;
 }
    }

    return 0;
}