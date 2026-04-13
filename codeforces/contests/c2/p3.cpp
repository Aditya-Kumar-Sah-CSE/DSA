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

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;

        for(int i = 1; i < n - 1; i++) {
            long long g1 = __gcd(a[i-1], a[i]);
            long long g2 = __gcd(a[i], a[i+1]);
            long long g3 = __gcd(a[i-1], a[i+1]);

            if(__gcd(g1, g2) == g3) {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}