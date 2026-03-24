#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
    cin>>n;

for (int i = n; i <=9013 ; i++)
{
   n++;
   int temp =n;
    int d1 = n%10;
    temp/=10;
    int d2 = temp%10;
    temp/=10;
    int d3 = temp%10;
    temp/=10;
    int d4 = temp%10;
if(d1!=d2 && d2!=d3 && d3!=d4&&d4!=d1&&d1!=d3&&d2!=d4) {
    cout <<n;
    return 0;
}
}

}