#include<iostream>
using namespace std;
int main(){
    int k,w,n;
    cin>>k>>n>>w;

int tm=k*((1+w)*w)/2;
if (tm>n)
{
    cout<<tm-n;
}
else{
    cout<<0<<endl;
}
return 0;

}