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
 
    int x, y, k;
        cin>>x>>y>>k;
        int xm = (x+k-1) / k; //
        int ym = (y+k-1) / k;
        if(x==0 && y==0) {
            cout<<0<<endl;
            return;
        }
        if (xm>ym) 
        {
            cout<<max(2*xm-1,0LL)<<endl;
        } else {
            cout<<2*ym<<endl;
        }
 
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