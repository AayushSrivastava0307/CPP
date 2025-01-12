#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
const int MOD = 1e9 + 7;
const int MAXA = 1e5;
const int MAXM = 1e7;
vector<int> sieve(int limit) {
    vector<int> spf(limit+1);
    iota(spf.begin(), spf.end(), 0);
    for (int i=2; i*i <= limit; ++i) {
        if (spf[i]==i){
            for (int j=i*i; j<=limit; j+=i) {
                if (spf[j]==j) { 
                    spf[j]=i;
                }
            }
        }
    }
    return spf;
}

int funcdivisor(const unordered_map<int, int>& pfc) {
    int div=1;
    for (auto &[prime, c]:pfc) {
        div=div*(c+1) % MOD;
    }
    return div;
}
 
void solve()
{
 
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for (int i=0; i<n; ++i) {
        cin>>v[i];
    }
    vector<int> spf = sieve(MAXA); 
    unordered_map<int, int> pfc;
    for (int i=2; i<=m; i++) {
        int curr=i;
        while (curr>1) {
            pfc[spf[curr]]++;
            curr/=spf[curr];
        }
    }

    vector<int> ans(n);
    for (int i=0;i<n; i++) {
        unordered_map<int, int> pf = pfc;
        int curr=v[i];
        while (curr>1) {
            pf[spf[curr]]++;
            curr/=spf[curr];
        }
        ans[i]=funcdivisor(pf);
    }

    for (auto &e : ans) {
        cout <<e<<" ";
    }
    cout<<endl;
 
}
 
 
 
signed main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc=1;
    // cin>>tc;
 
    while(tc--)
    {
        solve();
    }
    return 0;
}