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
    // edge
    if(n==3 || n==2){
        cout<< "NO SOLUTION";
        return;
    }
    if(n==1){
        cout<<1;
        return;
    }
    if(n==4){
        cout<<"2 4 1 3";
        return;
    }
    //odd
    if(n%2!=0){
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i=2;i<=n-1;i+=2){
            cout<<i<<" ";
        }
    }
    // //even
    if(n%2==0){
        for(int i=1;i<=n-1;i+=2){
            cout<<i<<" ";
        }
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }
    }
   
 
}
 
 
 
signed main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc=1;
    // cin>>tc;
 
    while(tc--)
    {
        solve();
    }
    return 0;
}