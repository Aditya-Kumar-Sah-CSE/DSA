#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        int n;
        cin >> n;
        vector<int> perm;
        if (n == 2) {
            perm = {2, 1};
        } else if (n == 3) {
            perm = {2, 3, 1};
        } else if (n == 4) {
            perm = {2, 4, 3, 1};
        } else if (n == 5) {
            perm = {3, 5, 4, 2, 1};
        } else {
            // General: start with small even, then large evens descending, odds descending, 1
            perm.push_back(2);
            for (int i = (n / 2) * 2; i >= 4; i -= 2) {
                perm.push_back(i);
            }
            for (int i = n | 1; i >= 3; i -= 2) {  // largest odd <=n
                perm.push_back(i);
            }
            perm.push_back(1);
        }
        for (int x : perm) cout << x << " ";
        cout << "\n";
    }
    return 0;
}