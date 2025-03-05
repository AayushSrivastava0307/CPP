#include <bits/stdc++.h>
using namespace std;

#define int int64_t

void solve()
{
     int n;
        cin >> n;
        vector<int> v(n);
        v.front() = 1;
        v.back() = 2;
        v[n-2] = 1;
        for(int i =1;i<n-2;i++)
            v[i] = i;
        for(int i =0;i<v.size();i++)
            cout <<v[i]<<" ";
        cout <<endl;
}

int32_t main()
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