class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        // sliding window of fix size 
double start = 0 ,end = 0,n = arr.size(), sum = 0, count = 0;

while(end<n){
    double wind_size = end - start + 1;
sum+=arr[end];

if(wind_size == k ){

if(sum/wind_size >= threshold)
{
    count++;
}

sum-=arr[start];
start++;
}

end++;

}   
        return count;
    }
};
