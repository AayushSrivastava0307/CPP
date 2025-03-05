#include <bits/stdc++.h>
using namespace std;
#define int int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &e:v)
    {
        cin >> e;
    }
    int even = 0;
    for (int e : v)
    {
        if (e % 2 == 0)
            even++;
    }
    int odd = n - even;
    int ans = 0;
    if (even > 0)
    {
        ans = odd + 1;
    }
    else
    {
        ans = max(0LL, odd - 1);
    }

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}