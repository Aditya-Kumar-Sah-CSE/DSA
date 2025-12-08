#include<iostream>

using namespace std;

int main(){
 int t;
 cin>>t;
 
 while (t--){
 
    
int n , x;
cin>>n>>x;
int arr[n];
for (int  i = 0; i <n; i++)
{
    cin>>arr[i];

}
int drr[n];
drr[0]=arr[0];
for (int i = 1; i < n; i++)
{
    drr[i]=arr[i]-arr[i-1];
}
drr[n]=2*(x-arr[n-1]);
int max = 0;
for (int i = 0; i <=n; i++)
{
    if(max<drr[i]){
        max = drr[i];
    }
}
cout<<max<<endl;

 }
return 0;
}