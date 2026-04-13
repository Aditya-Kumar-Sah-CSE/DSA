#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long cT, cH, cU;
    cin >> cT >> cH >> cU;

    // Base height contribution:
    // Each T takes 2 rows, each H takes 2 rows, each U takes 3 rows.
    long long n = 2 * cT + 2 * cH + 3 * cU;

    // If there are no U-blocks to help "buffer" the packing, 
    // T and H blocks require one extra row to handle the 
    // remaining unit cells that don't form a full 3-wide row.
    if (cU == 0 && (cT > 0 || cH > 0)) {
        n += 1;
    }

    cout << n << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}