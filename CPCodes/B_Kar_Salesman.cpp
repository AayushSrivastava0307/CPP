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
 
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
   for(auto &e:v) cin>>e;
    sort(v.begin(), v.end(), greater<int>());
    int sum=accumulate(v.begin(),v.end(),0LL);
    int bound1=(sum+x-1)/x;
    int bound2=v[0];
    cout<<max(bound1,bound2)<<endl;

 
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