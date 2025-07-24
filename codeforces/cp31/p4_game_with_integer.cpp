#include<iostream>

using namespace std;

int main(){
 int t;
 cin>>t;
 
 while (t--){
 
    
int n ;
cin>>n;
int x=n-1,y=n+1;
if (x%3==0)
{
   cout<<"First"<<endl;
}
else if(y%3 == 0){
     cout<<"First"<<endl;
}
else
cout<<"Second"<<endl;


 }
return 0;
}