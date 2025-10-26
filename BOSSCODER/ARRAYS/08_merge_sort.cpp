#include <iostream>
#include <vector>
using namespace std;

// Merge two subarrays of arr[left..mid] and arr[mid+1..right]
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    vector<int> arr = {38, 27, 43, 10};
    mergeSort(arr, 0, arr.size() - 1);
    for (int i : arr) cout << i << " ";
    cout << endl;
    return 0;
}


//  count inversion 
class Solution {
    int count =0;
    void  merge(vector<int>& arr,int start , int mid ,int end ){
    vector<int> temp(end - start + 1 );
  
    int left = start , right = mid+1 , index = 0;
    while(left<= mid && right <= end){
        // sort each small box ;
        if(arr[left]<=arr[right]){
            temp[index] = arr[left];
            index++;
            left++;
           
        }
        else{
            temp[index] = arr[right];
            index++;
            right++;
            count+=(mid - left+1);
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
  public:
    int inversionCount(vector<int> &arr) {
        // Code Here
        divide(arr,0,arr.size() - 1);
        
        return count;
        
    }
};
