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
 
    int n; cin>>n;
    vector<int> a(n);
    for(auto &e:a) cin>>e;
    vector<int> b(n);
    unordered_set<int> st;
    unordered_set<int> have(a.begin(),a.end());
    // unordered_set<int> all;
    // for(int i=1;i<=n;i++){
    //     all.insert(i);
    // }
    set<int> complement;
    for(int i=1;i<=n;i++){
        if(have.find(i)==have.end()){
            complement.insert(i);
        }
    }
    vector<int> comp;
    for(auto e:complement) comp.push_back(e);
    for(int i=0;i<n;i++){
        if(st.find(a[i])==st.end()){
            b[i]=a[i];
            st.insert(a[i]);
        }
        else b[i]=-1;
    }
    int k=0;
    for(int i = 0; i < n; i++){
        if(b[i] == -1){
            b[i]=comp[k];
            k++;
        }
    }
    for(auto e:b) cout<<e<<" ";
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