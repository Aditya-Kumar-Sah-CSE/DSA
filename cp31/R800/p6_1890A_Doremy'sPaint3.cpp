#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while (t--){ 
int n ;
cin>>n;
vector<int> arr;

for (int  i = 0; i < n; i++)
{ 
    int a;
    cin>>a;
 arr.push_back(a);
}
 map<int,int> freq;

    for(int x : arr)
        freq[x]++; 
    if (freq.size() == 1)
    {
          cout<<"Yes"<<endl;
    }
    
else if(freq.size() == 2){
      auto it = freq.begin();
            int c1 = it->second; ++it;
            int c2 = it->second;
            if((c1+c2) % 2 == 0){
                if(c1==c2) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else{
                 if(abs(c1-c2) == 1)
    cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
}
            }
        }

return 0;
}