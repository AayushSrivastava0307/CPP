#include<bits/stdc++.h>
using namespace std ;
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
pair<int64_t,int64_t> find(int64_t l,int64_t r,int64_t g){
    int64_t  L = l + (l % g == 0 ? 0 : g - (l % g));
    int64_t  R = r - r % g;
    for(int64_t i = 0; i <= (R - L) / g; i++)
        for(int64_t j = 0; j <= i; j++)
            if(__gcd(L + j * g, R - (i - j) * g) == g)
            {
               return{L + j * g,R - (i - j) * g};
            }
    return{-1,-1};
}
 
void solve()
{
 
    int64_t  l, r, g;
    cin>>l>>r>>g;
    cout<<find(l,r,g).first<<" "<<find(l,r,g).second<<endl;
 
}
 
 
signed main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int64_t tc=1;
    cin>>tc;
 
    while(tc--)
    {
        solve();
    }
    return 0;
}