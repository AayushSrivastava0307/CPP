#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        string s;
        cin >> s;
        string a;
        pair<int, int> pa, pb;
 
        // Find the first occurrence of '1' in the string
        for (int i = 0; i < (int)s.length(); i++) {
            if (s[i] == '1') {
                a = s.substr(i);
                pa = { i, (int)s.length() - 1 };
                break;
            }
        }
 
        if (a.empty()) {
            cout << "1 1 1 1\n";
        }
        else {
            int blen = 0, st = 0;
 
            // Find the first occurrence of '0' in substring a
            for (int i = 0; i < (int)a.length(); i++) {
                if (a[i] == '0') {
                    st = i;
                    blen = (int)a.length() - i;
                    break;
                }
            }
 
            if (blen == 0) {
                // If no '0' found in the string
                for (int i = 0; i < (int)s.length(); i++) {
                    if (s[i] == '0') {
                        pb = { i, i };
                        break;
                    }
                }
            }
            else {
                pb = { 0, 0 };
                string ans = a;
 
                for (int i = 0; i + blen <= (int)s.length(); i++) {
                    string now = a;
 
                    for (int j = i; j < i + blen; j++) {
                        now[j - i + st] = ((now[j - i + st] - '0') ^ (s[j] - '0')) + '0';
                    }
 
                    if (now > ans) {
                        ans = now;
                        pb = { i, i + blen - 1 };
                    }
                }
            }
 
            cout << pa.first + 1 << ' ' << pa.second + 1 << ' ' << pb.first + 1 << ' ' << pb.second + 1 << '\n';
        }
    }
 
    return 0;
}