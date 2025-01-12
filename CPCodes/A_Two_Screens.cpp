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
 
    string s,t;
    cin>>s;
    cin>>t;
    int x=s.size();
    int y=t.size();
    int samepr=0;
    for(int i=0;i<max(x,y);i++){
        if(s[i]==t[i]){
            samepr++;
        }
        else{
            break;
        }
    }
    if(samepr==0){
        cout<<x+y-samepr<<endl;
    }
    else{
        cout<<x+y+1-samepr<<endl;
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