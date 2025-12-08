#include<iostream>
#include <cstdlib>  // For abs(int)
using namespace std;

int main(){
 int n;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
 int min = abs(arr[0]);
 for (int  i = 0; i < n; i++)
 {
    if(arr[i] == 0){
        min =0;
        break;
    }
    else if(abs(arr[i])< min){
        min =abs(arr[i]) ;
    }
 }
 
cout<<min<<endl;
return 0;
}