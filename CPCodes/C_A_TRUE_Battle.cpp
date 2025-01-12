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
    vector<char> v(n);
    for(auto &e:v) cin>>e;
    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(v[i]=='1' && v[i+1]=='1'){
            flag=true;
        }
    }
    if(flag==true){
        cout<<"YES"<<endl;

    }
    else{
    if((v[0]=='1') || (v[n-1]=='1')){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
  
    }
    }
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