#include<bits/stdc++.h>
using namespace std ;
// #define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 int calc(int n, int k){
	if(k == 1) return n;
	int ans = 0;
	while(n){
		ans += n%k;
		n /= k;
	}
	return ans;
}
void solve()
{
 
    int n,k;
    cin>>n>>k;
    cout<<calc(n,k)<<endl;
 
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