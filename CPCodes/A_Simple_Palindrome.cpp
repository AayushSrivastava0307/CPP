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
    vector<char> vc(101);
    string s="aeiou";
    for(int i=0;i<101;i++){
        vc[i]=s[i%5];
    }
    int n;
    cin>>n;
    vector<char> ans(n);
    for(int i=0;i<n;i++){
        ans[i]=vc[i];
    }
    sort(ans.begin(),ans.end());
    for(auto &e:ans){
        cout<<e;
    }
    cout<<endl;
    return;
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