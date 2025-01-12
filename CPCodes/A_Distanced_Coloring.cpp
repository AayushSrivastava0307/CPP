
#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve(){
 
    int n,m,k;
    cin>>n>>m>>k;
    if(k<=n && k<=m){
        cout<<k*k<<endl;
    }
    else if(k>n && k<=m){
        cout<<k*n<<endl;
    }
    else if(k<=n && k>m){
        cout<<k*m<<endl;
    }
    else{
        cout<<m*n<<endl;
    }

 
}
 
 
 
signed main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc=1;
    cin>>tc;
 
    while(tc--){
        solve();
    }
return 0;
}