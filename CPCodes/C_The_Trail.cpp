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
    int m;
    cin >> m;
    string s;
    cin >> s;
    vector<vector<int>> v;
    v.resize(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    // precomp row and colm sums
    vector<int> row(n,0);
    vector<int> col(m,0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            row[i] += v[i][j];
            col[j] += v[i][j];
        }
    }
    int i = 0, j = 0;
    for (int l = 0; l < s.size(); l++)
    {
        if (s[l] == 'R')
        {
            v[i][j] = -col[j];
            col[j] = 0;
            row[i] += v[i][j];
            j++;
        }
        else
        {
            v[i][j] = -row[i];
            row[i] = 0;
            col[j] += v[i][j];
            i++;
        }
    }
    v[i][j] = -col[j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
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