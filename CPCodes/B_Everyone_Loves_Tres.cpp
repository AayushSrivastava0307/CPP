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
    if(n==1 || n==3){
        cout<<-1<<endl;
        return;
    }
     if (n % 2 == 0){
        for (int i = 1; i <= n-2; i++){
                cout << "3";
        }
        cout<<"66";
        cout <<endl;

    } 
    else {
        for (int i = 1; i <= n - 4; i++){
            cout << "3";
        }
        cout << "6366"<<endl;
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