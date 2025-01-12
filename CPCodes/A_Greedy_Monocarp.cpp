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
 
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    sort(v.begin(),v.end(),greater<int>());
    int currsum=0;
    for(int i=0;i<n;i++){  
       currsum+=v[i];
       if(currsum<=k){
        continue;
       }
       else{
        currsum-=v[i];
        break;
       }
       
        
    }
    int ans=(currsum==0)?0:(k-currsum);
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