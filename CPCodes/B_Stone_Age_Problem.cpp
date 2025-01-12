#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MAXN = 200005;
int a[MAXN], vis[MAXN], stp=0;

void solve()
{
    int n, q, ans=0, last=0;
    cin>>n>>q;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        ans+=a[i];
    }
    while(q--) {
        int t, x, y;
        cin>>t>>x;
        if(t==1) {
            cin>>y;
            if(vis[x]!=stp)
                ans+=y-last;
            else
                ans+=y-a[x];
            
            vis[x]=stp;
            a[x]=y;
        }
        if(t==2) {
            stp++;
            ans=x*n;
            last=x;
        }
        cout<<ans<<endl;
    }
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
