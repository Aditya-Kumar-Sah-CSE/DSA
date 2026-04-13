#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int> v;
int sum = 0;

for(int i=0;sum<=240;i++){
    sum+=i*5;
    v.push_back(sum);
    
}
// for (int i = 0; i < v.size(); i++)
// {
//     cout<<v[i]<<" ";
// }
int n , k,i ;
cin>>n>>k;

for ( i = 0; i < v.size()-1; i++)
{
    if((240-k)<v[i]||i>n){
        
break;
    }
}
 cout<<i-1;

}