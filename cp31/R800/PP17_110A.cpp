#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long c4=0,c7=0;
    while (n>0)
    {
        // cout<<n%10;
        if (n%10 != 4 && n%10 != 7)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else if(n%10==4){
            c4++;
        }
        else{
            c7++;
        }
        n/=10;
    }
    if (c4>0&&c7>0)
    {
        /* code */
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
    
}