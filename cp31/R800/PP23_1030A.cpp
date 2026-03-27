#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int count1=0;
    while (n--)
    {
        int v;
        cin>>v;
        if(v==1){
            count1++;
        }
    }
    if(count1){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;
}