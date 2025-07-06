#include<iostream>

using namespace std;

int main(){

int n,count = 0;
cin>>n;
while(n--){

    int a,b,c;
    cin>>a>>b>>c;
    if((a==b && a==1)||(a==c && a==1)|| (b==c && b==1)){
        count++;
    }
}
cout<<count;
return 0;
}