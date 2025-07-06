#include<iostream>
#include<vector>

using namespace std;


vector<int> rev(vector<int>& v ,int i,int j){
    for (i,j;i<=j;i++,j--){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
    }

    return v;
}
int main(){
int size;
cout<<"enter size of array  : ";
cin>>size;

vector<int> v;
for (int i = 0; i < size; i++)
{
               int  x;
               cin>>x;
               v.push_back(x);
}
int k;
if(k>size)   k%=size;
cout<<"enter steps : ";
cin>>k;
int i=0,j=size-k-1;
v = rev(v,i,j);
i=size-k,j=size-1;
v = rev(v,i,j);
i=0, j=size-1;
v = rev(v,i,j);
for (int i = 0; i < size; i++)
cout<<v[i]<<" ";


}
