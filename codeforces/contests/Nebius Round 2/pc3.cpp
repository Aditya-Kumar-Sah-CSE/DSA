#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        bool ok = true;

        for (int r = 0; r < k; r++) {
            multiset<int> sa, sb;

            for (int i = r; i < n; i += k) {
                sa.insert(a[i]);
                if (b[i] != -1) sb.insert(b[i]);
            }

            // check sb ⊆ sa
            for (int x : sb) {
                if (sa.find(x) == sa.end()) {
                    ok = false;
                    break;
                }
                sa.erase(sa.find(x));
            }

            if (!ok) break;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}