#include<iostream>
#include<string>
using namespace std;
int main(){
 int t;
 cin>>t;
 while (t--){
    int n,m;
cin>>n>>m;
string s[m] , x[n];
cin>>x[n]>>s[m];

string z = x[n];

for (int i = 1; i < 10; i++)
{
    
    z = z+z;
    for (int j = 0; j < z.size() - m; j++)
    {
        int substr = z.substr(j, m);
    }
    
    
}

 }
return 0;
}