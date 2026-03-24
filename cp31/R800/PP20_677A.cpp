#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,h;
    cin>>n>>h;
vector<int> vh(n);
int count=0;
for (int i = 0; i < n; i++)
{
    cin>>vh[i];
    if(vh[i]>h) count++;
}




 cout<<n+count;

}