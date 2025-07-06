#include<iostream>

using namespace std;

int main(){

int n;
cin>>n;
if(n>=4 && n%2==0 && ((n-2) % 2 == 0))
{

    cout<<"YES"<<endl;
}
else {
    cout<<"no"<<endl;
}

return 0;
}