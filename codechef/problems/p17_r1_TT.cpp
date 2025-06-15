#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
           int y,x,s;
            cin>>x>>y;
    s=x+y;
    
    if(s%4 == 0 || (s-1)%4 ==0)
    cout << "Alice" << endl;
    
    else
    
    cout<<"Bob"<<endl;
    
    
    }
    return 0;
}