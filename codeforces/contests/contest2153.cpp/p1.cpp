#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> b,distinct(n,0);
    for (int i = 0; i < n; i++)
    {
        /* code */
        int b_v;
        cin>>b_v;
        b.push_back(b_v);
        distinct[b_v - 1] = 1;


    }
   
    int count =0;
    for (int i = 0; i < n; i++)
    {
if(distinct[i]){
count++;

}
    }
    cout<<count<<endl;

}

}