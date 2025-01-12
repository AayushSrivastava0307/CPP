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
 
    int N;
    cin>>N;
    int count=0;
    vector<int> v(N);
    for(auto &e:v){
        cin>>e;
    }
    if(N<=2){
        cout<<v[0]+2*v[1];
        return;
    }
    for(int i=1;i<N-1;i++){
        if(v[i]>v[i+1] && v[i]>v[i-1]){
            count+=2*v[i]+v[i+1]+v[i-1];

        }
    }
    cout<<count;
 
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