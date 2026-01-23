#include<bits/stdc++.h>
using namespace std;

int main (){
int t;
cin>>t;
while(t--){
int n;
cin>>n;

vector<int> v(n);
for(int i=0; i<n;i++)
 cin>>v[i];
 bool no = true;
for (int i = 1; i < n-1; i++)
{
 if(v[i-1] < v[i] && v[i]>v[i+1]){
    no =  false;
    cout<<"YES\n"<<i<<" "<<i+1<<" "<<i+2<<endl;
    break;

 }
}
if(no)
cout<<"NO"<<endl;



}

    return 0;
}

// 