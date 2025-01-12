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
 
    int N, K;
    cin >> N >> K;
    K--;
    vector<int> A(N);
 
    for (auto &a : A)
        cin >> a;
 
    int me = A[K];
 
    for (int i = 0; i < N; i++)
        A[i] = A[i] > me;
 
    int first_one = 0;
 
    while (first_one < N && A[first_one] == 0)
        first_one++;
 
    if (K < first_one) {
        cout << first_one - 1 << '\n';
        return;
    }
 
    int ans = max(first_one - 1, 0LL);
    swap(A[K], A[first_one]);
    K = first_one;
    first_one = 0;
 
    while (first_one < N && A[first_one] == 0)
        first_one++;
 
    ans = max(ans, (K > 0) + first_one - K - 1);
    cout << ans << '\n';
 
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