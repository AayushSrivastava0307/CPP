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
 
    
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    map<int, int> freq, mp;
    for(auto &e:v) freq[e]++;
    int cnt = 0;
    while (true) {
        if (freq[cnt] > 0) {
            freq[cnt]--;
            int f = freq[cnt];
            mp[cnt%x]+=f;
            cnt++;
        } 
        else if (mp[cnt % x] > 0) {
            mp[cnt % x]--;
            cnt++;
        } 
        else {
            break;
        }
    }
    cout << cnt << endl;
    







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