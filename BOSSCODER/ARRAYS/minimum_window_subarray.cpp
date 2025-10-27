class Solution {
public:
    string minWindow(string s, string t) {
        int total = t.length();
        
       // unordered_map<char,int> m;

      // optmise it as all upper /lower case letter 
        vector<int> m(256,0);
        for(char it : t) m[it]++;

        int start = 0 ,end = 0 , ans = INT_MAX , index = -1;

        while(end <  s.size()){
            m[s[end]]--; // dec the count of char
            if(m[s[end]] >= 0 ) // if count is not -ve 
            total--; 
            // dec the total
            while(!total && start <= end){
                // update length of substring 
                if(ans>end - start + 1){
                    ans = end - start+1;
                    index = start;
                }
                m[s[start]]++;//increase the count of char
                if(m[s[start]]>0) //if count is +ve
                total++;

                start++; // dec the size
            }

            // can we increase the size of window
            end++;
        }

        if(index == -1) return "";

        string str = "";
        for(int i = index;i<index+ans;i++){
            str+=s[i];
 }
            return str;
       

    }
};
