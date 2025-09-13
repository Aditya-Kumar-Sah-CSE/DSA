#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];

    }
    int counte = 0;
    int counto = 0;
    for(int i = 0 ;i < n ;i++){
        if(arr[i] % 2 == 0){
            counte++;
        }
        else{
            counto++;
        }
    }
    if(counto % 2 == 0 ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

    return 0;
}