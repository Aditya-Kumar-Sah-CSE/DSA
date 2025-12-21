#include<bits/stdc++.h>

using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;
cin>>n;

long long x[n];
for (int i = 0; i < n; i++)
{
    /* code */
    cin>>x[i];

}
if(n%2 == 0 ){
    cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
         cout<<1<<" "<<n<<endl;

}
else{
    cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
         cout<<1<<" "<<n<<endl;
       
        cout<<n-1<<" "<<n<<endl;
         cout<<n-1<<" "<<n<<endl;
}
    }


}