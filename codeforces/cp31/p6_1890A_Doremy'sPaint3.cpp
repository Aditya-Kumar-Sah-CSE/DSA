#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while (t--){ 
int n ;
cin>>n;
int arr[n];
for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}
int sum =0;

for (int i = 0; i < n; i++)
    {
sum+= (arr[i]+arr[i+1]);
    }
    if (n==2)
    {
          cout<<"yes"<<endl;
    }
    
else if(sum%n  == 0){
    cout<<"yes"<<endl;
}
else
cout<<"No"<<endl;
 }
return 0;
}