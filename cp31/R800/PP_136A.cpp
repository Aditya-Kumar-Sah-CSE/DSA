#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vi(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        vi[a-1]=i+1;
    }
    for(int &num:vi){
        cout<<num<<" ";
    }
    
}