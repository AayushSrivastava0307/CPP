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

    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (auto &e : v)
        cin >> e;
    int rlen = r - l + 1;
    l--;r--;
    vector<int> lpart, rpart;
    for (int i = 0; i <= r; i++)
    {
        lpart.push_back(v[i]);
    }
    for (int i = l; i < n; i++)
    {
        rpart.push_back(v[i]);
    }
    sort(lpart.begin(), lpart.end());
    sort(rpart.begin(), rpart.end());
    int ls = 0, rs = 0;
    ls=accumulate(lpart.begin(),lpart.begin()+rlen,0LL);
    rs=accumulate(rpart.begin(),rpart.begin()+rlen,0LL);
    cout << min(ls, rs) <<endl;
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