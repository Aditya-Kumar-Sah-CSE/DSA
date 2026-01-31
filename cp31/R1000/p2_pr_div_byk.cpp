#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
    int n ,k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
  cin>>a[i];
    }
    int mi = k , even_count =0;
 

    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0) even_count++;
        if(a[i]%k == 0){
            mi = 0;
           
        }


        mi = min(mi,k-(a[i]%k));
    }
    
        if(k==4){
            if (even_count >=2) mi = min(mi,0);
            else if(even_count == 1) mi = min(mi,1);
            
            else if (even_count ==0) mi = min(mi,2);
        
            
          
       
            
        }
    cout<<mi<<endl;
}


    return 0;
}