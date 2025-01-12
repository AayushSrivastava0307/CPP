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
 
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    bool cset=false;
    bool dset=false;
    for(int i=min(a,b)+1;i<max(a,b);i++){
        if(c==i){
            cset=true;
        }
        if(d==i){
            dset=true;
        }
    }
    if(cset^dset==true){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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