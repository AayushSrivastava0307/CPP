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
 
    int N;
    cin >> N;
   vector<vector<char>> layout(N + 1, vector<char>(N + 1));
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            cin >> layout[i][j];
        }
    }
    for (int i=1; i<= N/2; ++i) {
        vector<vector<char>> temp(N + 1-i+1, vector<char>(N + 1-i+1));
        for (int x = i; x <= N + 1 - i; ++x) {
            for (int y =i; y <= N +1-i; ++y) 
            {
                temp[y][N+1-x]=layout[x][y];
            }
        }
        for (int x = i; x <= N +1 -i; ++x) 
        
        {
            for (int y = i; y <= N + 1 - i; ++y) 
            {
                layout[y][N+1-x] = temp[y][N+1-x];
            }
        }
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            cout << layout[i][j];
        }
        cout << endl;
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