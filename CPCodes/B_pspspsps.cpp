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
 
    int n;cin>>n;
    string s; cin>>s;
    if(s[0]=='s'){
        s[0]='.';
    }
    if(s.back()=='p'){
        s[n-1]='.';
    }
    bool alls=true;
    bool allp=true;
    for(int i=0;i<=n-1;i++){
        if(s[i]=='p'){
            alls=false;
            break;
        }
    }
    for(int i=0;i<=n-1;i++){
        if(s[i]=='s'){
            allp=false;
            break;
        }
    }
    if(allp || alls){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
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