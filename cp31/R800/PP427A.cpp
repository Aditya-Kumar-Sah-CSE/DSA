#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];

for(int i =0;i<n;i++){
    cin>>arr[i];
}
int count_unrated =0;
int count_police=0;

for (int i = 0; i < n; i++)
{
    if(arr[i]>0) count_police+=arr[i];
    else if(arr[i]<0&&count_police<=0) count_unrated++;
    else if(arr[i]<0&&count_police>=0) count_police--;
}

cout<<count_unrated;


}