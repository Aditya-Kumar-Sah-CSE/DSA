#include<bits/stdc++.h>

using namespace std;

int main(){
long long n , d;
cin>>n>>d;
vector<long long> v(n);
for (long long  i = 0; i < n; i++)
{
    cin>>v[i];
}
sort(v.begin(),v.end());
long long left = -1 , right = n - 1;
long long teams = 0, team_size = 1;
while(left<right){

if((v[right] * team_size)<=d && left<right){
    left++;
    team_size++;
}
else{
    teams++;
    right--;
    team_size = 1;
}

} 

cout<<teams<<endl;

return 0;
}