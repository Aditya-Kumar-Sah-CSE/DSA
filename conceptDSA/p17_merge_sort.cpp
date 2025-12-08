#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr,int start , int mid ,int end ){
    vector<int> temp(end - start + 1 );
    int left = start , right = mid+1 , index = 0;
    while(left<= mid && right <= end){
        // sort each small box ;
        if(arr[left]<=arr[right]){
            temp[index] = arr[left];
            index++;
            left++;
        }else{
            temp[index] = arr[right];
            index++;
            right++;
        }
    }
    // left element fill in it 
    while(left<=mid){
         temp[index] = arr[left];
            index++;
            left++;
    }
      while(right <= end){
         temp[index] = arr[right];
            index++;
            right++;
    }
// original arr temp replace 
index =0;
  while(start<=end){
          arr[start] = temp[index];
            index++;
            start++;
    }
}
void divide(vector<int>& arr , int start ,int end){
if(start == end) return;
int mid = start + (end - start )/2;
divide(arr,start,mid);
divide(arr,mid+1,end);

merge(arr,start,mid,end);
}


int main() {
 vector<int> v = {8,3,5,1,7,6,2,4,9};
 int start = 0 , end = v.size()-1;
divide(v,start,end);
for (int i : v) cout<<i<<" ";


return 0;
}