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

    unordered_map<int, int> mp;
    vector<pair<int, int>> vpp(n);
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> vpp[i].first >> vpp[i].second;
        if (vpp[i].first == vpp[i].second)
        {
            st.insert(vpp[i].first);
            mp[vpp[i].first]++;
        }
    }

    vector<int> temp(st.begin(), st.end());
    string s = "";

    for (int i = 0; i < n; i++)
    {
        if (vpp[i].first == vpp[i].second)
        {
            if (mp[vpp[i].first] > 1)
            {
                s += '0';
            }
            else
            {
                s += '1';
            }
        }
        else
        {
            int ind1 = int(lower_bound(temp.begin(), temp.end(), vpp[i].first) - temp.begin());
            int ind2 = int(lower_bound(temp.begin(), temp.end(), vpp[i].second) - temp.begin());
            // if the entire range [vpp[i].first, vpp[i].second] is "forced" (in temp)
            // we set ans[i] = 0, otherwise ans[i] = 1
            if (ind1 != temp.size() && ind2 != temp.size() &&
                temp[ind1] == vpp[i].first && temp[ind2] == vpp[i].second &&
                (ind2 - ind1 + 1) == (vpp[i].second - vpp[i].first + 1))
            {
                s += '0';
            }
            else
            {
                s += '1';
            }
        }
    }
    cout << s << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}