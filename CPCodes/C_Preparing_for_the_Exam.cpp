#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve()
{
 
   int n,m,k;
   cin>>n>>m>>k;
    vector<int> a(m), q(k);
    for(int i = 0; i < m; i++) cin>>a[i];
    unordered_set<int> known;
    for (int i=0;i<k; i++) {
        cin>>q[i];
        known.insert(q[i]);
    }
    string ans = "";
        for (int i = 0; i < m; i++) {
            if (known.size() >= n - 1 && (known.size() == n || !known.count(a[i]))) {
                ans += "1";
            } else {
                ans += "0";
            }
        }
        cout << ans << endl;
 
}
 
 
 
signed main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc=1;
    cin>>tc;
 
    while(tc--)
    {
        solve();
    }
    return 0;
}