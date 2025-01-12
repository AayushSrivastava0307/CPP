#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
void checkplus(int i,string &s,int &count) {
    if (i >= 0 && i + 3 < s.size()) {
        if ((s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')) {
            count++;
        }
    }
}
void checkminus(int i,string &s,int &count) {
    if (i >= 0 && i + 3 < s.size()) {
        if ((s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')) {
            count--;
        }
    }
}
void solve()
{
    string s;
    cin >> s;
    int count = 0;
    //precount
    for (int i = 0; i < s.size(); i++) {
        checkplus(i,s,count);
    }
    int q;
    cin >> q;
    while (q--) {
        int i;
        char v;
        cin >> i >> v;
        i=i-1;
        for (int j = i - 5; j <= i + 5; j++) {
            checkminus(j,s,count);
        }
        s[i] = v;
        for (int j = i - 5; j <= i + 5; j++) {
            checkplus(j,s,count);
        }
        if (count>0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

}
 
 
 
signed main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc=1;
    cin>>tc;
 
    while(tc--)
    {
        solve();
    }
    return 0;
}