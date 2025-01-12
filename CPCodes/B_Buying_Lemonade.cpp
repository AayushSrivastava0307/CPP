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
 
    int n, k, subtract = 0; 
        cin >> n >> k;
        int ans = k;
        vector<int> v(n);
        for(auto &e : v) cin >> e;
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++) {
            v[i] -= subtract; 
            k -= min(k, (n - i) * v[i]);
            if(k == 0) break; 
            else ans++; 
 
            subtract += v[i];
        }
        cout << ans << "\n";
 
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