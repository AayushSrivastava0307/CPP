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
 
    int n; cin>>n;
    int k; cin>>k;
    vector<int> v(n,0);
    int curr = 1;
    for (int i =k-1; i<n; i+=k) {
        v[i]=curr++;
    }
    for (int i = 0; i < n; i++) {
        if (v[i]==0) {
            v[i] =curr++;
        }
    }
    for(auto &e:v){
        cout<<e<<" ";
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