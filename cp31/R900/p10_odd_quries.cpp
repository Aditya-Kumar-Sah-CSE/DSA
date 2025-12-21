#include<bits/stdc++.h>

using namespace std;
int main(){

  long long t;
    cin>>t;
    while(t--){
      long long n,q;
cin>>n>>q;

vector<long long > x(n +1 ,0);
for (int i = 1; i <= n; i++)
{
    /* code */
    cin>>x[i];


}

for (int i = 1; i <= n; i++)
{
    /* code */
   x[i]+=x[i-1];

}

for (int i = 0; i < q; i++)
{
    /* code */
  long long l,r,k;
    cin>>l>>r>>k;
    long long  ans = x[n] -(x[r] - x[l-1] ) + ((r-l +1)*k);
    if(ans % 2 == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

    }


}