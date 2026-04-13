#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int least = v[0], greatest = v[0];
    int count = 0;

    for (int i = 1; i < n; i++){
        if(v[i] > greatest || v[i] < least){
            count++;
        }

        least = min(least, v[i]);
        greatest = max(greatest, v[i]);
    }

    cout << count;

    return 0;
}