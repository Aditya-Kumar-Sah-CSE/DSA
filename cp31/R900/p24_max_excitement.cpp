#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
      
        long long a, b;
        cin>>a>>b;
        long long max_excitement ,min_num_of_moves; 
        if(a==b)  {
            max_excitement = 0;
min_num_of_moves = 0;
        }
        else {
            long long min_val = min(a, b);
            a-=min_val;
            b-=min_val;
            max_excitement = max(a, b) ;
            min_num_of_moves = min((min_val%max_excitement), (max_excitement - (min_val%max_excitement)));
        }

        cout<<max_excitement<<" "<<min_num_of_moves<<endl;
    }
    return 0;
}