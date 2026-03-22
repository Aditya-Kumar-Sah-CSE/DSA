#include<iostream>
using namespace std;
int main(){
int n;

cin>>n;
int count=0;

if(n%5==0){
    count = n/5;
}
else{
    count=(n/5)+1;
}
cout<<count<<"\n";
return 0;

}