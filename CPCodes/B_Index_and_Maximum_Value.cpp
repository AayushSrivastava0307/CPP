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
 
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int max=*max_element(v.begin(),v.end());
    while(m--){
        char c;
        cin>>c;
        int l;
        cin>>l;
        int r;
        cin>>r;
        if(max>=l && max<=r){
            if(c=='+') max++;
            if(c=='-') max--;

        }
        cout<<max<<" ";
    }
    cout<<endl;


 
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