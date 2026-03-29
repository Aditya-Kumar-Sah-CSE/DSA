#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define REP(i,a,b) for (int i = a; i <= b; i++)

int main(){
    int n;
    cin >> n;

    vi v(n);

    REP(i,0,n-1) cin >> v[i];

    long double sum = 0;

    REP(i,0,n-1){
        sum += v[i] ;
    }

    cout << fixed << setprecision(12) << (sum / n);
}