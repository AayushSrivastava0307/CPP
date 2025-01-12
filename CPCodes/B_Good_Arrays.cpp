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
 
    int n;cin>>n;
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    int sum=accumulate(v.begin(),v.end(),0LL);
    if(n==1){
        cout<<"NO\n";
        return;
    }
    int onecount=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            onecount++;
        }
    }
    if(sum<n+onecount){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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