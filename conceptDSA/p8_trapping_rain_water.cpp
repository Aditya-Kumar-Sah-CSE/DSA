#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<int> v;

 int n,i,j;
 
 cin>>n;
vector<int> arr(n),brr(n),nums(n);

    for( i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
//   previous greater number.
    int max=-1;
    for ( i = 1; i < v.size()-1; i++)
    {
      if(max<v[i-1]){
        max=v[i-1];
      }
      arr[i]=max;
    //  cout<<arr[i]<<endl;
    }
    arr[0]=-1,arr[v.size()-1]=-1;
     
    //  for( i=0;i<n;i++)
    // cout<<arr[i]<<" ";

    // next greatest element

     for ( i = 1; i < v.size()-1; i++)
    {
      int max =-1;
        for(j=i;j<v.size()-1;j++)
        {
            if(max<v[j+1])
                max=v[j+1];      
        }
      brr[i]=max;
   
    }
    brr[0]=-1,brr[v.size()-1]=-1;
// for( i=0;i<n;i++)
//       cout<<brr[i]<<" ";
    for ( i = 0; i < v.size(); i++)
    {
       int min = arr[i]<=brr[i]?arr[i]:brr[i];
        nums[i] = min;
    }
    //  for( i=0;i<n;i++)
    //   cout<<nums[i]<<" ";
    int sum =0;
for ( i = 0; i < v.size(); i++)
    {
        if(v[i]<nums[i]){
            sum+=(nums[i]-v[i]);
        }

    }
      cout<<sum;
return 0;
}
