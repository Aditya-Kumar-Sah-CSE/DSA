#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int left = 0, right = n - 1;
    int sum1 = 0, sum2 = 0;
    bool turn = true; // true -> player1, false -> player2

    while(left <= right){
        int pick;
        if(v[left] > v[right]){
            pick = v[left];
            left++;
        } else {
            pick = v[right];
            right--;
        }

        if(turn) sum1 += pick;
        else sum2 += pick;

        turn = !turn;
    }

    cout << sum1 << " " << sum2;
}