#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
int t;
cin>>t;
while (t--)
{
    int n,c;
    cin>>n>>c;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());




}

    return 0;
}