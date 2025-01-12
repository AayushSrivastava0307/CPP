#include <bits/stdc++.h>
using namespace std;
#define int int64_t

//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0, cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1' && cnt < i)
        {
            cnt++;
            continue;
        }
        cnt = max(cnt - 1, 0LL);
        ans += i + 1;
    }
    cout << ans << endl;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
    return 0;
}