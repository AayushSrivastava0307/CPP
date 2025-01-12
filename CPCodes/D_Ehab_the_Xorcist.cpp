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
    int u, v;
    cin>>u>>v;
    if ((u%2 != v%2) || u>v) {
        cout <<"-1";
        return;
    }
    if (u==v) {
        if (!u) {
            cout <<"0";
        } else {
            cout <<"1\n"<<u;
        }
        return;
    }
    int x=(v-u)/2;
    if (u&x) {
        cout <<"3\n"<<u<<" "<<x<< " " <<x;
    } else {
        cout <<"2\n"<<(u^x)<< " " <<x;
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