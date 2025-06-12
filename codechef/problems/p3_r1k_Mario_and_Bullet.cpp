#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
           int y,x,z,t;
            cin>>x>>y>>z;
     
    t = y%x == 0 ? (y/x) : (y/x) + 1;
    

 if(z>t)
    cout<<(z-t)<<endl;
else
 cout << 0 <<endl;
    
    }
    return 0;
}