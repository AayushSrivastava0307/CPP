#include<bits/stdc++.h>
using namespace std;
#define int long long

//--------------------------------------------------Debugger-----------------------------------------------------//
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//

void solve()
{
    // cout<<endl;
    string s;
    cin>>ws;
    getline(cin, s);
    // cin>>s;
    // cout<<s<<endl;
    string s1, s2;
    int i = 0;
    while (i < s.size() && s[i] != ' ') {
        s1 += s[i];
        i++;
    }
    i++;
    while (i < s.size()) {
        s2 += s[i];
        i++;
    }

    cout << s2[0]<<s1.substr(1,2)<<" "<<s1[0]<<s2.substr(1,2)<<endl;
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
