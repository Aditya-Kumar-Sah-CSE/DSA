#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int numberOfEmptyRoom=0;
while (t--)
{
    /* code */
    int people;
    int capacity;
    cin>>people>>capacity;
    if(capacity-people>=2) numberOfEmptyRoom++;
}
cout<<numberOfEmptyRoom;
}