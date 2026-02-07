#include<bits/stdc++.h>
 
using namespace std;

int main(){
int t;
cin>>t;
while (t--)
{
    long long n;
    cin>>n;

    long long ans_a = 1 , ans_b = n-1 ,fac = 2;

    for ( fac = 2; fac * fac <= n ; fac++)
    {
        if(n%fac == 0){
            ans_a = n / fac;
            ans_b = n - ans_a;
            break;
        }
    }

    cout<<ans_a<<" "<<ans_b<<"\n";
    
}



    return 0;
}