#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    long long n ,x;
    cin>>n>>x;
vector<long long> a(n);
for (long long i = 0; i < n; i++)
{
    cin>>a[i];
}
long long max=0 , min=0 ;
for(int i =0;i<n;i++){
max+=ceil(a[i]*1.0/x);

min+=a[i];

}

min=ceil(min*1.0 / x);
cout<<min<<" "<<max<<endl;
}



return 0;
}