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
    vector<int> v(n);
    for(auto &x: v) cin>>x;
    unordered_set<int> st;
    int maxsize=0;
    for(int i=0;i<n;i++){
        if(st.find(v[i])==st.end()){    
            st.insert(v[i]);
        }
        else{
            st.clear();
            st.insert(v[i]);
        }
        maxsize=max(maxsize,(int)st.size());
    }
    cout<<maxsize<<endl;
 
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