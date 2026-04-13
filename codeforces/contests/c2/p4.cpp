#include <bits/stdc++.h>
using namespace std;

long long gcdcode(long long a, long long b) {
    return b == 0 ? a : gcdcode(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcdcode(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int ans = 0;

        for(int i = 0; i < n; i++) {
            long long need;

            if(i == 0) {
                need = a[1];
            }
            else if(i == n - 1) {
                need = a[n - 2];
            }
            else {
                long long left = gcdcode(a[i-1], a[i]);
                long long right = gcdcode(a[i], a[i+1]);
                need = lcm(left, right);
            }

            if(need <= b[i]) {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}