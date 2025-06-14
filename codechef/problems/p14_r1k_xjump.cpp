#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
           int y,x,min;
            cin>>x>>y;
    min = x/y;
    if(x%y ==0)
    cout << min << endl;
    
    else
    
    cout<<min + (x%y) <<endl;
    
    
    }
    return 0;
}