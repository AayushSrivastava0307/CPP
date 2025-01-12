#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int row = sqrt(n);
    if (row * row != n) {
        cout << "No" << endl;
        return;
    }
    for (int i = 0; i < row; i++) {
        if (s[i] != '1') {
            cout << "No" << endl;
            return;
        }
    }
    for (int i = 1; i < row - 1; ++i) {
        if (s[i * row] != '1' || s[(i + 1) * row - 1] != '1') {
            cout << "No" << endl;
            return;
        }
        for (int j = 1; j < row - 1; ++j) {
            if (s[i * row + j] != '0') {
                cout << "No" << endl;
                return;
            }
        }
    }
    for (int i = 0; i < row; i++) {
        if (s[(row - 1) * row + i] != '1') {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
