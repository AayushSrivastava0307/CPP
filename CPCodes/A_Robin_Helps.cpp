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
 
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &e:v){
        cin>>e;
    }
    int g=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]>=k){
            g+=v[i];
        }
        if(v[i]==0 && g!=0){
            g--;
            ans++;
        }
    }
 
    cout<<ans<<"\n";
    return;
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