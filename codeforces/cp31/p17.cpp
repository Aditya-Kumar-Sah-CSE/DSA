#include<iostream>
#include<vector>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,k,x;
    

    vector<int> res;
    cin>>n>>k>>x;
   if(k == 1 && x==1 ){
    cout<<"no"<<endl;
  
   }
   else if((k==2 && x==1 ) && n%2 != 0){
    
        cout<<"no"<<endl;
    
     
   
    
}
   else if((k==2 && x==1 ) && n%2 == 0){ 
    for(int i = 0 ; i< n/2;i++){
        res[i] = 2;
        cout<<res[i];
    }
       
}
else{
  for(int i = 0 ; i< n;i++){
        res[i] = 1;
        cout<<res[i];
    }
}
   
}
    return  0;
}