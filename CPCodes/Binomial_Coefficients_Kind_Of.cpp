#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
const int mod=1e9+7;
const int maxint = 1e5+10;
vector<int> C(maxint, 1);
void solveit() {
    C[0] = 1;
    for(int i = 1; i < maxint; i++){
        C[i] = (C[i-1]*2)%mod;
    }
}
void solve()
{
 
   int t;
   cin>>t;
   vector<int> nis(t);
   vector<int> kis(t);
   for(int i=0;i<t;i++) cin>>nis[i];
   for(int i=0;i<t;i++) cin>>kis[i];
   solveit();
    for(int i=0;i<t;i++){
        cout<<C[kis[i]]<<endl;
    }
  
 
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