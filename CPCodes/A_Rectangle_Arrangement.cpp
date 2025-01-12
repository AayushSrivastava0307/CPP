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
 
    int n;
    cin>>n;
    vector<pair<int,int>> vp(n);
    for(int i = 0; i < n; i++) {
        cin >> vp[i].first >> vp[i].second;
    }
    int ans=2*(vp[0].first+vp[0].second);
    int wmax=vp[0].first;
    int hmax=vp[0].second;
    for(int i=1;i<n;i++){
        int w=vp[i].first;
        int h=vp[i].second;
        if(w-wmax>0){
            ans+=2*(w-wmax);
        }
        if(h-hmax>0){
            ans+=2*(h-hmax);
        }
        wmax=max(wmax,w);
        hmax=max(hmax,h);
       

        
    }
    cout<<ans<<endl;
 
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