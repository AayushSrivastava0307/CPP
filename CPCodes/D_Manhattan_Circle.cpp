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
 
    int m,n;
    cin>>m>>n;
    char a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int count=0;
    vector<pair<int,int>> vp;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='#'){
                count++;
                vp.push_back({i+1,j+1});
            }
        }
    }
    // if(count==1){
    //     cout<<vp[0].first<< " " <<vp[0].second<<endl;
    //     return;
    // }
    // for(auto e:vp){
    //     cout<<e.first<<" "<<e.second<<endl;
    // }
//    else{    
        int pos=vp.size()/2;
        cout<<vp[pos].first<< " " <<vp[pos].second<<endl;
        return;
//    }    



 
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