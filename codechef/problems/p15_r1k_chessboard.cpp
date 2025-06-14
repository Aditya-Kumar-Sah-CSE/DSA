#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
           int x1,x2,y1,y2 ,x,y,max;
            cin>>x1>>y1>>x2>>y2;
    x=x1-x2;
    y=y1-y2;
    x=x>0?x:-x;
    y=y>0?y:-y;
    max = x>y?x:y;
    
    cout<<max<<endl;
    
    
    }
    return 0;
}