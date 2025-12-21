#include<bits/stdc++.h>

using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
cin>>a>>b>>n;

long long x[n];
for (int i = 0; i < n; i++)
{
    /* code */
    cin>>x[i];

}
long long max_timer=b ;
for (int i = 0; i < n; i++)
{
    /* code */
    max_timer+=min(x[i],a-1);

}

cout<<max_timer<<endl;
    }


}