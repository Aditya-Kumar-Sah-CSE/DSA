#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        // p = {1,2,3,...,a [a+1 , a+2 ,... ,n-b],n-b+1 ,...n-1,n}
        //q = {1,2,3,...,a [n-b ,.., a+2,a+1],n-b+1,...n-1,n}
        // p={1,2,3} n=a=b=3


        if(a+b+2<=n  || (a==b && a==n)){
            cout<<"yes"<<endl;

        }
        else
        cout<<"No"<<endl;
    }
    return 0;
}