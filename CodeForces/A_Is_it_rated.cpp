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
 
    int n;
    cin>>n;
    vector<int> v(2*n);
    for(auto& e:v){
        cin>>e;
    }
    bool rated=false;
    bool unrated=false;
    for(int i=1;i<=2*n;i+=2){
        if((v[i]-v[i-1])!=0){
            cout<<"rated";
            rated=true;
            return;
        }
    }
    for(int i=0;i<2*n-2;i++){
        if(v[i]<v[i+2]){
        cout<<"unrated";
        unrated=true;
        return;
        }
    }
    if(!unrated && !rated){
        cout<<"maybe";
    }
 
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