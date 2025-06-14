#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
           int y,x,z;
            cin>>x>>y>>z;
    int b=x/3;
    

    if(x%3 != 0)
    cout << x*y + b*z << endl;
    
    else
    
    cout<< x*y + (b-1)*z<<endl;
    
    
    }
    return 0;
}