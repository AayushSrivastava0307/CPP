#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve()
{
 
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    vector<int> before(26,0);
    vector<int> after(26,0);
    for (int i = 0; i < n; i++) 
    {
        after[s[i] - 'A']++;
    }
    for (int j = 0; j < n; j++) 
    {
        after[s[j] - 'A']--;
        for (int c = 0; c < 26; c++) {
            if (before[c] > 0 && after[c] > 0) {
                count += before[c] * after[c];
            }
        }
        before[s[j] - 'A']++;
    }
    cout <<count<< endl;
 
}
 
 
 
signed main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc=1;
    // cin>>tc;
 
    while(tc--)
    {
        solve();
    }
    return 0;
}