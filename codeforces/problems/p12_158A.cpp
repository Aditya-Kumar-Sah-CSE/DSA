#include<iostream>
#include<vector>
using namespace std;

int main(){


    int n ,k;
    cin>>n>>k;
vector<int> v(n);

for (int  i = 0; i < n; i++)
{
    int a;
    cin>>a;
    v[i]=a;
   
}
int t = v[k-1];
int count = 0;
for (int  i = 0; i < n; i++)
{
   
    if(  v[i]>=t && v[i] != 0){
        count++;
    }
   
}
 cout<<count<<endl;




return 0;
}