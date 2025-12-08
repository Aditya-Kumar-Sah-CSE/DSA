#include<bits/stdc++.h>

using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;

            int arr[n];
             bool sorted = true ;
            for(int i=0 ; i<n ;i++){
                cin>>arr[i];

            }
            for(int i = 1;i<n;i++){
                if(arr[i-1]>arr[i]){
                    cout<<0<<endl;
                    sorted = false;
                    break;
                }
            }

            long long mini = INT32_MAX;
            
if(sorted){
             for(int i = 1 ;i<n;i++){
                long long  diff = arr[i] - arr[i-1];
 mini = min(diff,mini);

            }
cout<<mini/2 +1 <<endl; 
}
  
        }

    }
