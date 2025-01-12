#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    int cnt = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        while (i + x < n)
        {
            int elem = v[x][i + x];
            if (elem < 0)
                mx = min(mx, elem);
            x++;
        }
        cnt += abs(mx);
        mx = 0;
    }
    mx = 0;
    for (int i = 1; i < n; i++)
    {
        int x = 0;
        while (i + x < n)
        {
            int elem = v[i+x][x];
            if (elem < 0)
                mx = min(mx, elem);
            x++;
        }
        cnt += abs(mx);
        mx = 0;
    }
    cout<<cnt<<'\n';

   
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc=1;
    cin>>tc;

    while(tc--) {
        solve();
    }
    return 0;
}
