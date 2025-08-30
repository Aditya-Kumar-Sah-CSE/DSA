#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
           int n;
            cin>>n;
            string s;
            cin>>s;
            int count =0,
            mini = 3;

            for(int i =1 ; i< n -1;i++){
               
                    if(s[i] == 1){
                        count++;
mini = min(count,mini);
                    }else{
                        count =0;
                        mini = 3;
                    }
                    
                    
            }
          if(mini>=3)
                    cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
            
   
    
    }
    return 0;
}