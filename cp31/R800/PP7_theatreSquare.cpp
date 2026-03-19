#include<bits/stdc++.h>
using namespace std;

int main(){
long long m,n,a;
cin>>n>>m>>a;

long long res;
if((m>=n && a>=n)){
       res = (m%a>0?m/a + 1 : m/a)  ;
} 
else if (n>=m && a>=m)
{
    res = (n%a>0?n/a + 1 : n/a);
}

else{

    res = (m%a>0?m/a + 1 : m/a)  * (n%a>0?n/a + 1 : n/a);
    
   
}
 cout<<res<<endl;
return 0;

}