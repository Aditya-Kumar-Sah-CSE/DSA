#include<iostream>
#include<vector>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int a,b,n;
cin>>a>>b>>n;
vector<int> v(n);
for (int i = 0; i < n; i++)
{ 
    int x;
    cin>>x;
    v[i]=x;
}

int c =b ,count=1;
 int i=0;
while (c--)
{
    count++;
    
        
        if(c== 1 && (1+v[i])<a && i<n){
            c=v[i];
            i++;
        }
        else if(c==1 && i<n && 1+v[i]>=a){
            c=a;
            i++;
        }
            
        
    
}
cout<<count<<endl;
}


return 0;
}