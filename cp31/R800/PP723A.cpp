#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c;
    cin>>a>>b>>c;
    int min =0;
    int x= abs(a-b),
    y=abs(b-c),
    z=abs(c-a);

    min = x>y?(x>z?x:z):(y>z)?y:z;
    cout<<min;

}