#include <iostream>
int great(int x3){
if(x3>3 ){
    
return great(x3-=3);
}
else if(x3 == 3)
return 3;
else // x3 = 1,2
    return 1;

}

    
    

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
           int x,x3;
            cin>>x;
            if(x>3){
          x3= great(x);
        cout<<x3<<endl;    
        }
          else if(x == 3)
         cout<<3<<endl;
          else
          cout<<1<<endl;
    
    
    
    
    }
    return 0;
}
