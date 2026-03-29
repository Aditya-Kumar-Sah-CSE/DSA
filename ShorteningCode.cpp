typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

// macros
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)

#include<bits/stdc++.h>
using namespace std;
int main(){


    ll a = 122;
    ll b = 233;

//     v.push_back(make_pair(y1,x1));
// v.push_back(make_pair(y2,x2));
// int d = v[i].first+v[i].second;
v.PB(MP(y1,x1));
v.PB(MP(y2,x2));
int d = v[i].F+v[i].S;
// for (int i = 1; i <= n; i++) {
// search(i);
// }
REP(i,1,n) {
search(i);
}


}