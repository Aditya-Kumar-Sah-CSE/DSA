#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int countA=0;
    for(char &ch:s){
        if(ch=='A'){
            countA++;
        }
    }

    if(n-countA == countA) cout<<"Friendship";
    else if(countA> n-countA) cout<<"Anton";
    else{
        cout<<"Danik";
    }
}