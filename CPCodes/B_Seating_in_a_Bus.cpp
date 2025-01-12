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
 
    int n; cin >>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
     bool occupied[n+1] = {false}; 
        // for ( int i = 0; i < n; i++)
        // {
        //     cout<<occupied[i]<<" ";
        // }
        // cout<<endl;
        
    occupied[a[0]] = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] == 1) {
            if (!occupied[2]) {
                cout << "NO\n";
                return;
            }
        }
        else if (a[i] == n) {
            if (!occupied[n - 1]) {
                cout << "NO\n";
                return;
            }
        }

        else {
            if (!occupied[a[i] - 1]  && !occupied[a[i] + 1] ) {
                cout << "NO\n";
                return;
            }
        }
        
        occupied[a[i]] = true;
    }
    cout<<"YES"<<endl;

 
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