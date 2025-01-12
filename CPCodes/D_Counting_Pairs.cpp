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
 
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    int sum = 0;
    for (int i=0; i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    int lbval = sum-y;
    int ubval = sum-x;
        sort(a.begin(), a.end());
        int count = 0;
        //bin search
        for (int i=0;i<n-1;i++) {
            int lo=lbval-a[i];
            int hi=ubval-a[i];
            int next=i+1;
            auto start=lower_bound(a.begin()+next,a.end(),lo);  
            auto end=upper_bound(a.begin()+next,a.end(),hi);   
            count+=(end-start);
        }
        cout<<count<<endl;
 
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