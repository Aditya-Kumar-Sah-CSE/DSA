#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
           int d,l,r;
            cin>>d>>l>>r;
    
    if(d>r)
    cout << "Too Late" << endl;
    
    else if(d<l)
    
    cout<<"Too Early"<<endl;
    
    else if(d<=r && d>=l)
    cout<<"Take second dose now"<<endl;
    
    
    }
    return 0;
}