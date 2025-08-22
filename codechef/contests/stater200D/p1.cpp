#include <iostream>

using namespace std;

int main() {
    int n,x,y;
    cin>>n>>x>>y;
    int one_vec = y / x;
    if(n % one_vec == 0)
     cout<<( n/one_vec );
     
     else
     cout << (n/one_vec +1);
      
   
    return 0;
}