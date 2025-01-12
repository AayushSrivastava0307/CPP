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
 
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int before = i;
            int after = n - i - 1;
            int segs = ((before + 1) * (after + 1)) - 1;
            mp[segs]++;
            int between = v[i] - v[i - 1] - 1;
            segs = before * (after + 1);
            mp[segs] += between;
            
        }
        while (q--)
        {
            int a;
            cin >> a;
            if (mp.count(a))
            {
                cout << mp[a] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << "\n";
 
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