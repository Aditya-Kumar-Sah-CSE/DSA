#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        for(int i = 1; i <= n; i++) {
            cin >> p[i];
        }

        set<int> marked;  // stores marked chairs
        int ans = 0;

        for(int i = 1; i <= n; i++) {
            // if current chair already marked → stop
            if(marked.count(i)) {
                break;
            }

            // sit on this chair
            ans++;

            // mark p[i]
            marked.insert(p[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}