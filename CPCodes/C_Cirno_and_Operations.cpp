#include<bits/stdc++.h>
using namespace std ;
#define int int64_t
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve()
{
 
    int n; cin>>n;
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    int sum=accumulate(v.begin(),v.end(),0LL);
    int ans=LLONG_MIN;
    ans=max(ans,sum);
    int iter=n;
    if(n==1){
        cout<<v[0]<<endl;
        return;
    }
    while(iter>0){
        int cursum=0;
        for(int i=0;i<iter-1;i++){
            cursum+=v[i+1]-v[i];
            v[i]=v[i+1]-v[i];
        }
        ans=max({cursum,ans,-cursum});
        iter--;
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