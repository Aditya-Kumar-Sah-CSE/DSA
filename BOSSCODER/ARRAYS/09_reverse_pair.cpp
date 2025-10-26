class Solution {
public:
int count =0;
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
void count_rev_pair(vector<int> &arr , int low ,int mid, int high){
    int right = mid + 1;
    for(int i = low ; i<=mid; i++){
        while(right<=high && arr[i]>2*arr[right]) right++;
        count+=(right - (mid + 1));
    }
}

void divide(vector<int>& arr , int start ,int end){
if(start == end) return;
int mid = start + (end - start )/2;
divide(arr,start,mid);
divide(arr,mid+1,end);
count_rev_pair(arr,start,mid,end);
merge(arr,start,mid,end);
}

    int reversePairs(vector<int>& nums) {
        divide(nums, 0 , nums.size() - 1);

        return count;
    }
};
// -- tle

// m2
class Solution {
public:

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
int count_rev_pair(vector<int> &arr , int low ,int mid, int high){
    int right = mid + 1, count = 0;
    for(int i = low ; i<=mid; i++){
        while(right<=high && arr[i]/2.0 >arr[right]) right++;
        count+=(right - (mid + 1));
    }
    return count;
}

int divide(vector<int>& arr , int start ,int end){
    int cnt = 0;
if(start == end) return cnt;
int mid = start + (end - start )/2;
cnt+=divide(arr,start,mid);
cnt+=divide(arr,mid+1,end);
cnt+=count_rev_pair(arr,start,mid,end);
merge(arr,start,mid,end);
return cnt;
}

    int reversePairs(vector<int>& nums) {
        return divide(nums, 0 , nums.size() - 1);

       
    }
};

//O(log(n) * n)
