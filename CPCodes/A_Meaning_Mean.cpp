#include<bits/stdc++.h>
using namespace std ;

 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve()
{
 
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &e:v){
        cin>>e;
    }
    //edge
    if(v.size()==1){
        cout<<v[0]<<endl;
        return;
    }
    if(v.size()==2){
        cout<<(v[0]+v[1])/2<<endl;
        return;
    }
    sort(v.begin(),v.end());
    int temp=(v[0]+v[1])/2;
    for(int i=2;i<n;i++){
        temp=(v[i]+temp)/2;
    }
    cout<<temp<<endl;


 
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