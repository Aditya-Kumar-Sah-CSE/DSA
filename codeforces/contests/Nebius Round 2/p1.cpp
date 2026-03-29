#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        int n;
        cin >> n;
        vector<int> p(n);
        vector<int> pos(n+1);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            pos[p[i]] = i;
        }
        vector<int> ans(n);
        for (int target = 1; target <= n; ++target) {
            if (n <= 2) {
                ans[pos[target]] = n;
                continue;
            }
            int mn = n + 1, mx = 0;
            for (int x = 1; x <= n; ++x) {
                if (x == target) continue;
                mn = min(mn, pos[x]);
                mx = max(mx, pos[x]);
            }
            int len_no_delete = mx - mn + 1;
            int len_delete = n - 1;
            ans[pos[target]] = min(len_no_delete, len_delete);
        }
        for (int i = 0; i < n; ++i) {
            if (i > 0) cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}