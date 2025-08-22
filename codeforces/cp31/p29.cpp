// we know 1s = 10^8 ops
//    1test = 10^8 ops
//    range of test case t = 500
//    ops/test case = 10^8 /500;
//    ops/ tc=2* 10^5 ops

// n =100;
// O(n^3) no it will go 10^3

// odd * odd = odd
// even * even = even

// we need {o,e,o,e,o,e,o}

// {o,o,o,e,e,o,o,e,o,o,o,e} s-1 op

#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
long long n;
cin>>n;
long long a[n];
for (int i = 0; i < n; i++)
{
    /* code */
    cin >> a[i];
}

long long ops_count = 0;

for(long long i = 0 ;i<n-1;i++){
    if((a[i] % 2 ) == (a[i+1] % 2 )){
        ops_count++;
    }
}
cout<<ops_count<<endl;

}

    return 0;
}

// time O(n)
// space cmplx O(n)