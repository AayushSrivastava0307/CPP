#include <bits/stdc++.h>
using namespace std;

//--------------------------------------------------Debugger-----------------------------------------------------//
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//

void solve() {
    int n;
    cin >> n; 
    vector<pair<long long, long long>> vp(n); 
    for (int i = 0; i < n; i++) {
        cin >> vp[i].first >> vp[i].second; 
    }
    double total = 0; 
    long long xb = 0, yb = 0; 
    for (int i = 0; i < n; i++) {
        long long x = vp[i].first;
        long long y = vp[i].second;
        total += sqrt((x - xb) * (x - xb) + (y - yb) * (y - yb)); 
        xb = x; 
        yb = y;
    }
    total += sqrt(xb * xb + yb * yb);
    cout << fixed << setprecision(9) << total << endl; 
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin>>tc;
    while (tc--) {
        solve();
    }
    return 0;
}
