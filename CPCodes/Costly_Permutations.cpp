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
 
    int n;
    cin>>n;
     vector<int> perm(n+1);
    for (int i=1; i <=n; i++) {
         cin>>perm[i];
         perm[i];
    }//cycle detect
    vector<bool> vis(n+1, false);
    vector<int> clens;
    for (int i=1;i<=n;i++) {
         if (!vis[i]) {
            int curr=i;
            int clen=0;
             while (!vis[curr]) {
                 vis[curr]=true;
                curr=perm[curr];
                 clen++;
            }
            clens.push_back(clen);
         }
     }
    if (clens.size()==1) {
         cout<<0<<endl;
        return;
    }
    int ans=0;
    multiset<int> pq(clens.begin(), clens.end());  
    while (pq.size() > 1) {
        auto it = pq.begin();  
        int x= *it;
        pq.erase(it);  
        it = pq.begin();  
        int y= *it;
        pq.erase(it);  
        ans+=x+y;  
        pq.insert(x+y);    
    }
    cout <<ans<< endl;  
 
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