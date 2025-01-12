#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
// bool comp(const pair<int,int> &a,const pair<int,int> &b){
//         return(a.second>b.second);
//  }
void solve()
{
 
    int n,k; cin>>n>>k;
    vector<pair<int,int>> vp(k);
    for(auto &e:vp){
        cin>>e.first;
        cin>>e.second;
    }
    // sort(vp.begin(),vp.end(),comp);
    // int ans=0;
    // for(int i=0;i<min(n,k);i++){
    //     ans+=vp[i].second;

    // }
    // cout<<ans<<endl;
    vector<int> store(k+1,0);
    for(int i=0;i<k;i++){
        store[vp[i].first]+=vp[i].second;
    }
    sort(store.begin(),store.end(),greater<int>());
    int ans=0;
    for(int i=0;i<min(n,k);i++){
        ans+=store[i];
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