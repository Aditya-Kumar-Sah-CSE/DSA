#include<iostream>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n, count = 0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == 2) count++;
    }
    if(count % 2 != 0 ) 
    cout<<-1<<endl;
    else{
        int c2 = 0,ind;
        for(int i = 0 ; i< n; i++){
            if(arr[i] == 2) c2++;
            if(c2 == count/2){
                ind = i;
                break;
            }
           
        
    }
     cout<<ind+1<<endl;
    }
        
}
    return 0;
}