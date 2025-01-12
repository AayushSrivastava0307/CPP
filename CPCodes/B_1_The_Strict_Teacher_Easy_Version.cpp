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
 
    int m,n,q;
    cin>>n>>m>>q;
    int t1,t2,s;
    cin>>t1>>t2>>s;
    if ((s<t1 && t1<t2) || (s<t2 && t2<t1)) {cout<<min(t1,t2)-1<<endl; return;}
    if((s>t1 && t1>t2) || (s>t2 && t2>t1)) {cout<<n-max(t1,t2)<<endl; return;}
    if((s>t1 && s<t2) || (s>t2 && s<t1)) {cout<<abs((t2-t1)/2)<<endl; return;}
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