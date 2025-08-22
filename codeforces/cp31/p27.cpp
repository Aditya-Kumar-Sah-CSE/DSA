
// calcute time complexity

//  1s = 10^8 ops
// 1 test = 3s = 3 * 10^8
// ops/testcase =(3*10^8) / 2000 ~ 15 * 10^4 ~ 150000

//  n =50
//  O(n^2) = 2500
// O(n^3) = 125000
// O(n^4) x
// if max element make first all fix

// required arr = {max,min,...}
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n;i++){
            cin>>a[i];
        }
        vector<int> res;
        
        // array me sort krne ke lia 
       sort(a,a+n);
long long max = a[n-1] ,min = a[0] ;
        if(max != min){
            cout<<"YES"<<endl;
            cout<<max<<" ";
              for(int i=0;i<n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      
    }
    return 0;

}

// tc= O(nlog n ) + O(n)= O(50) + O(50log2(50)) = O(log(50*6)); 