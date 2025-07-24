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
bool flag =true;
for (int i = 1; i < n; i++)
    {
        if (arr[i]>n)
        {
flag=false;
           cout<<"No"<<endl;
           break;
        }
         }

if (arr[0]>arr[1])
{
   cout<<"No"<<endl;
}
   
    

else if(flag==true){
    cout<<"Yes"<<endl;
}

 }
return 0;
}