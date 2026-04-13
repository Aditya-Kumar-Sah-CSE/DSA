#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
const ll INF = 1e18;

// Applying mods in a fixed order (P then Q)
ll apply_mods(ll x, bool use_p, bool use_q, ll p, ll q) {
    ll res = x;
    if (use_p) res %= p;
    if (use_q) res %= q;
    return res;
}

void solve() {
    int n, k;
    ll p, q;
    if (!(cin >> n >> k >> p >> q)) return;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    // Precompute prefix sums for the 4 possible "during" states
    // 0: No mod, 1: P only, 2: Q only, 3: Both (P then Q)
    vector<vector<ll>> pref(n + 1, vector<ll>(4, 0));
    for (int i = 1; i <= n; i++) {
        pref[i][0] = pref[i - 1][0] + a[i];
        pref[i][1] = pref[i - 1][1] + (a[i] % p);
        pref[i][2] = pref[i - 1][2] + (a[i] % q);
        pref[i][3] = pref[i - 1][3] + ((a[i] % p) % q);
    }

    // dp[i][stateP][stateQ] 
    // State: 0 (Before), 1 (During), 2 (After)
    vector<vector<vector<ll>>> dp(n + 1, vector<vector<ll>>(3, vector<ll>(3, INF)));
    dp[0][0][0] = 0;

    for (int i = 0; i <= n; i++) {
        for (int sp = 0; sp < 3; sp++) {
            for (int sq = 0; sq < 3; sq++) {
                if (dp[i][sp][sq] == INF) continue;

                // 1. Process the current element (or move to next)
                if (i < n) {
                    int mask = 0;
                    if (sp == 1) mask |= 1;
                    if (sq == 1) mask |= 2;
                    dp[i + 1][sp][sq] = min(dp[i + 1][sp][sq], dp[i][sp][sq] + (pref[i + 1][mask] - pref[i][mask]));
                }

                // 2. Transition: Start P interval (must commit to k elements)
                if (sp == 0 && i + k <= n) {
                    int current_q_mask = (sq == 1 ? 2 : 0);
                    ll cost = pref[i + k][current_q_mask | 1] - pref[i][current_q_mask | 1];
                    dp[i + k][1][sq] = min(dp[i + k][1][sq], dp[i][sp][sq] + cost);
                }

                // 3. Transition: Start Q interval (must commit to k elements)
                if (sq == 0 && i + k <= n) {
                    int current_p_mask = (sp == 1 ? 1 : 0);
                    ll cost = pref[i + k][current_p_mask | 2] - pref[i][current_p_mask | 2];
                    dp[i + k][sp][1] = min(dp[i + k][sp][1], dp[i][sp][sq] + cost);
                }

                // 4. Transition: End intervals
                if (sp == 1) dp[i][2][sq] = min(dp[i][2][sq], dp[i][sp][sq]);
                if (sq == 1) dp[i][sp][2] = min(dp[i][sp][2], dp[i][sp][sq]);
            }
        }
    }

    ll ans = INF;
    for (int sp = 0; sp < 3; sp++) {
        for (int sq = 0; sq < 3; sq++) {
            ans = min(ans, dp[n][sp][sq]);
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}
