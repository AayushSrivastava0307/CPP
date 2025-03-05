#include<bits/stdc++.h>
using namespace std ;
#define int int64_t
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve()
{
 
    int n,m;
    cin>>n>>m;
    int total=4*m*n;
    int currblx=0;
    int currbly=0;
    int topx=m;
    int topy=m;
    int erase=0;
    int i=1;
    int lastx,lasty;
    while(n--){
        int x; cin>>x;
        int y; cin>>y;
        currblx+=x;
        currbly+=y;
        if(i>1){
            erase+=2*(lastx-currblx+lasty-currbly);
        }
        topx+=x;
        topy+=y;
        lastx=topx;
        lasty=topy;

        i++;
    }
    cout<<total-erase<<endl;

 
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