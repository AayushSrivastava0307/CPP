#include<bits/stdc++.h>
using namespace std ;
// #define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
int countSquares(int a, int b)
{
    int cnt = 0; // Initialize result
 
    // Traverse through all numbers
    for (int i = a; i <= b; i++)
 
        // Check if current number 'i' is perfect
        // square
        for (int j = 1; j * j <= i; j++)
            if (j * j == i)
                cnt++;
 
    return cnt;
}
 
void solve()
{
 
    long long k;
    cin>>k;
    // greater than n
    // prime nos always on 
    // even factors always on
    //odd factors always off
    //odd factor= z^2 form
    //p sq will be off
    cout << k + int(sqrtl(k) + 0.5) << "\n";

 
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