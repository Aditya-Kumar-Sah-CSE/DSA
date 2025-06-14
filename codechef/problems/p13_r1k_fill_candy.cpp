#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
           int n,k,m,b;
            cin>>n>>k>>m;
          b=n/(k*m);  
    
    if(n%(k*m) ==0 )
    cout << b << endl;
    
    else
    
    cout<<b + 1<<endl;
    
    
    }
    return 0;
}