#include<iostream>
#include<vector>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,k,x;
    vector<int> v;
    cin>>n>>k>>x;
    int rem=n;
    for(int i=k;i>0;i--){
        if (i==x)
        {
           continue;
        }
        else {
              rem = n % i;
               int d = n/i;
               v.push_back(d);
               n=rem;
        }
     

    }
vector<int> a; 
 for(int i=k;i>0;i--){
        if(i==x) continue;
        else{
            for(int j=0;j>v[i];j++){
        a.push_back(i);
        
        }
        }

    if (rem == 0){
        cout<<"YES"<<endl;
        cout<<v.size()<<endl;
       for(int g=0;g<a.size();g++)
     cout<<a[g];
    }
    else{
        cout<<"NO"<<endl;
    }
  
        
    }
   
}
    return  0;
}