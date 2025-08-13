#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
           int n;
            cin>>n;
            int arr[n];
            vector<int> frq(n+1,0);
            for(int i = 0 ; i < n ; i++){
                    cin>>arr[i];
                    frq[arr[i]]++;
            }
            int ind=0,maxfrq=0;
            for(int i = 1 ;i<=n;i++){
                    if(maxfrq<frq[i]){
                            maxfrq = frq[i];
                            ind = i;
                    }
            }
    
    if(ind == 1)
    cout << n - maxfrq  << endl;
    
    else
    
    cout<<n - maxfrq + 1<<endl;
    
    
    }
    return 0;
}