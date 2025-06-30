#include<iostream>
#include<vector>
using namespace std;
int main(){
int x;
 cout<<"Enter target";
 cin>>x;
 vector<int> v;
 int n,i;
 cout<<"Enter array size: ";
 cin>>n;
cout<<"Enter array element :2";
    for( i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    for ( i = 0; i <= v.size()-2; i++)
    {
         for(int j=1;j <= v.size()-1;j++)
        {
            if(v.at(i) +v.at(j) == x )
            cout<<"["<<i<<","<<j<<"]"<<endl;
        }
   
    }
}

