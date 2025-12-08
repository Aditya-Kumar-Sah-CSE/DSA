#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0 ; i<n;i++){
            cin>>arr[i];
        }
        int min_ops = 0;
        int countp1 = 0 ,countn1 = 0;
        // sum +ve/0 if  (-ve1 must be less or equal to +ve1 ).
        // prod = 1 if(-1 must be even in count )

        for(int i=0 ; i<n;i++){
            if(arr[i] == 1){
                countp1++;
            }
            else{
                countn1++;
            }
        } 
    //    if(countn1 == 0 || (countn1 <= countp1 && countn1 %2 == 0)) min_ops = 0;
    //    if(countn1 == 1) min_ops = 1;
    //    else if(countp1 == 0 && countn1 % 2 ==0) {
    //     if(countn1%4 == 0) min_ops= countn1 / 2 ;
 
    while(countn1>countp1 || countn1 % 2 != 0){
        countp1++;
        countn1--;
        min_ops++;
    }
        cout<<min_ops<<endl;
    }
}