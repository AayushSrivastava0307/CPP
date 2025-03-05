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
 
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ele;
    cin>>ele;
    vector<int> newa(n);
    for(int i=0;i<n;i++){
        newa[i]=ele-a[i];
    }
    int curr=min(a[0],newa[0]);
    for(int i=1;i<n;i++){
        int mini=min(a[i],newa[i]);
        int maxi=max(a[i],newa[i]);
        if(maxi<curr){
            cout<<"NO"<<endl;
            return;
        }
        if(mini>=curr){
            curr=mini;
        }
        else if(maxi>=curr){
            curr=maxi;
        }
    }
    cout<<"YES"<<endl;
 
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