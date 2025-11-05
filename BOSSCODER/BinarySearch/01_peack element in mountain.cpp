class Solution {
public:
// 1,6,4,2,3 -- left me element nhi h to excess ky hoga so error unsigned offset 
    int peakIndexInMountainArray(vector<int>& arr) {
        int start  = 0 , end = arr.size() - 1 , mid ;

        while(start <=end){
            // mid = start + (end-start)/2;
            mid = end + (start - end)/2;

            // peak element 

            if(arr[mid] > arr[mid - 1] && arr[mid]>arr[mid + 1]) return mid;
            // right side element  
            else if(arr[mid]>arr[mid -1]) start = mid+1;
            // left side move 
            else end = mid -1;
        }
        return -1;
    }
};
