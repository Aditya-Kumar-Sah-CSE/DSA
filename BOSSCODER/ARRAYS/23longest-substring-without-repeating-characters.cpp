class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        double start = 0 ,end = 0,n = s.size(), len = 0;
        vector<bool> count(256,0);
while(end<n){

  
// repet char

while(count[s[end]]){
    count[s[start]]=0;
    start++;
}


count[s[end]]=1;
len = max(len,end - start + 1);
end++;

}   

return len;
    }
};
