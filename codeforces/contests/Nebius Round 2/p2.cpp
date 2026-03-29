#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int n = x + y;

        // case 1
        if (x == 0 || y == 0) {
            cout << n << "\n";
            for (int i = 0; i < x; i++) cout << 1 << " ";
            for (int i = 0; i < y; i++) cout << -1 << " ";
            cout << "\n";
            continue;
        }

        // case 2 & 3
        if(x==y) cout<<1<<endl;
        else
        cout << abs(x-y) << "\n";

        vector<int> a;

        while (x > 0 || y > 0) {
            while (y==0&&x>0)
            {
                a.push_back(1);
                x--;
            }
            while (x==0&&y>0)
            {
                a.push_back(-1);
                y--;
            }
            if(x>0){ 
                a.push_back(1);
                x--;
            }
            
            if(y>0){
                a.push_back(-1);
                y--;
            }
           
            
        }

        for (int v : a) cout << v << " ";
        cout << "\n";
    }
}