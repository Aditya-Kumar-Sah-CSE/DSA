#include<bits/stdc++.h>

using namespace std;

int main(){

int t ;
cin>>t;
while(t--){
int n ;
cin>>n;
long long arr[n];
for (int i = 0; i < n; i++)
{
    /* code */
    cin>>arr[i];
}


long long max = arr[0];


for(int i = 1 ; i<n;i++){
    if(max < arr[i]){
        max = arr[i];
    }
}
vector<long long> b , c;
for(int i = 0 ; i<n;i++){
    if(max == arr[i]){
       c.push_back(arr[i]);
    }else{
        b.push_back(arr[i]);
    }
}
if(c.size() == n){
    cout<<-1<<endl;
}
else{
    cout<<b.size()<<" "<< c.size() << endl;
    for(int i = 1 ; i<b.size();i++){
    cout<<c[i]<<" ";
}
cout<<endl;
       for(int i = 1 ; i<c.size();i++){
    cout<<b[i]<<" ";
}
  
}

}
    return 0;
}