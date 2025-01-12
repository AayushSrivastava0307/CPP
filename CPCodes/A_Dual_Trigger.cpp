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
    string s;
    cin>>s;
    int even1check=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            even1check++;
        }
    }
    if(even1check%2!=0){
        cout<<"NO\n";
        return;
    }
    if(even1check==2){
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='1'){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
 
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