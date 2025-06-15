#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<int> v;
 int n,i,j;
//  cout<<"Enter array size: ";
 cin>>n;

// cout<<"Enter array element : ";
    for( i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    int index=-1;
    for(j=v.size()-2;j>=0;j--){
        if (v[j]<v[j+1])
        {
            index = j;
            break;
        }
        
    }

    // cout<<index<<endl;
    if(index == -1){
        for(int i = 0,k=n-1;i<k;i++,k--){
            int temp=v[i];
            v[i]=v[k];
            v[k]=temp;
        }
    }
    else if(index != -1){
        for(int i = index+1,k=n-1;i<k;i++,k--){
            int temp=v[i];
            v[i]=v[k];
            v[k]=temp;
        }
        // idx of next greater than pio indx
        int gre =-1;
        for( i=index + 1;i<n;i++){
            if(v[index]<v[i]){
            gre =i;
                break;
            }
        }
       
            int temp = v[index];
                v[index]=v[gre];
                v[gre]=temp;
    }
    // cout<<v[0]<<"\n";
    for( i=0;i<n;i++)
    cout<<v[i]<<" ";
}
