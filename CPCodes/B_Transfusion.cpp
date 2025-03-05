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
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int sum = accumulate(a.begin(), a.end(), 0LL);
    if (sum % n != 0)
    {
        cout << "NO"<<endl;
        return;
    }
    int x = sum / n;

    int oddSum = 0, evenSum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 1)
            oddSum += a[i];
        else
            evenSum += a[i];
    }

    int oddCount = (n + 1) / 2;
    int evenCount = n / 2;
    if (oddSum == x * oddCount && evenSum == x * evenCount)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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