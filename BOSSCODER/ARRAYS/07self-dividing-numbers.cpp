// self-dividing-numbers - TLE
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;


        for(int i = left ; i<=right;i++){
            int num = i;
          
            bool all = true;
            while(num>0){
              int   digit = num%10;
            //    cout<<digit<<endl;
            if(digit == 0 ) continue;
                else if(i % digit != 0 ) {
                    all = false;
                    break;
                }
                
                num /=10;
            }
            if(all){
                v.push_back(i);
            }
        }
        return v;
    }
};
