#include<bits/stdc++.h>
using namespace std ;
#define int long long
typedef vector<int> vint;
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve()
{
 
    int n; cin>>n;
    int sum=0;
    vint v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // for(auto ele:v){
    //     cout<<ele;
    // }
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++){
        if(v[i]>sum+1){
            cout<<sum+1;
            return;
        }
        else{
            sum+=v[i];
        }
    }
    cout<<sum+1;
 
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