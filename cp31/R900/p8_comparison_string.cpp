#include<bits/stdc++.h>

using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;

        cin>>n;

   vector<char> v(n);

   for (int i = 0; i < n; i++)
   {
    /* code */
    cin>>v[i];
   }
   int max_length=0,count=0;
  
   for (int i = 0; i < n-1; i++)
   {
    /* code */
   
    if(v[i] == v[i+1] ) {
        count++;
       
        
    }
    else count = 0;
    max_length = max(max_length,count);
   }
   
cout<< max_length + 2<<endl;

         

    }


}