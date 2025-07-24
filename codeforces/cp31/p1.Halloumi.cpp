// arr two case :
// case1:sorted - "yes"
//case2:unsorted
        // k=1 one element so reverses will be same -- always "no"
        //k>1 power to swap any element to any position -- always "yes"


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long> arr(n)  ;
    for(int i=0;i<n;i++)//n
    cin>>arr[i];
    vector<long long> copy = arr;
    sort(copy.begin(),copy.end());//n

    if (copy == arr || k>1)
    {
        /* code */
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    


    
 }
 return 0;
}