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
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n>=2 && n<=4){
        cout<<2<<endl;
        return;
    }
    //1,4,10,22,46,94 //double +2;
    int ans=2;
    int curr=1;
    while(true){
        int prevcurr=curr;
        curr=curr*2+2;
        if(n>=prevcurr && n<=curr){
            break;
        }
        ans++;

    }
    cout<<ans<<endl;

 
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