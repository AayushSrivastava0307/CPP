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
    char  v[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>v[i][j];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<v[i][j];
    //     }
    //     cout<<endl;
    // }
    vector<int> x(n);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(v[i][j]=='#'){
                x[i]=j+1;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        cout<<x[i]<<" ";
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