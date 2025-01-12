#include<bits/stdc++.h>
using namespace std ;
#define int int
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve()
{
 
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int sum=a+b+c;
        int cycle=(n-1)/sum;
        int day=cycle*3;
        int remaining=n-cycle*sum;
        if(remaining>0) day++;
        if(remaining>a) day++;
        if(remaining>a+b) day++;
        cout<<day<<endl;
 
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