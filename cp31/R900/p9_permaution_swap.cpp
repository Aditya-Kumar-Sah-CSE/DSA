#include<bits/stdc++.h>
#include<math.h>
#include <numeric>
using namespace std;
int main(){

  long long  t;
    cin>>t;
    while(t--){
        int n;

        cin>>n;

   vector<int> v(n);

   for (int i = 0; i < n; i++)
   {
    /* code */
    cin>>v[i];
   }
   int k=abs(v[0]-1);
  
   for (int i = 1; i < n; i++)
   {
    /* code */
   
   k= gcd(k,abs(v[i] -( i+1)));
       
        
    }
cout<<k<<endl;
   }
   


         

    


}