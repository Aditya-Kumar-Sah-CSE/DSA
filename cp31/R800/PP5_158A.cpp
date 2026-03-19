#include<bits/stdc++.h>
using namespace std;
int main(){
int t , k;
cin>>t>>k;

    vector<int> v(t);
    for(int i = 0 ; i<t;i++){
        cin>>v[i];
    }
sort(v.rbegin(),v.rend());
int min_score = v[k-1],count=0;

for (int i = 0; i<t; i++)
{
    /* code */
    if(v[i]>= min_score && v[i]!=0){
        count++;
    }
}
cout<<count<<endl;




}