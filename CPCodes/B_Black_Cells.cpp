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
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n%2==0){
        int mink=0;
        for(int i=1;i<n;i++){
            mink=max(mink,(v[i]-v[i-1]));
            i++;
        }
        cout<<mink<<endl;return;
    }
    int cnt=INT64_MAX;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            temp.push_back(v[j]);
        }
        int ans=1;
        for(int j=1;j<temp.size();j+=2)
        {
            ans=max(ans,temp[j]-temp[j-1]);
        }
        cnt=min(cnt,ans);
    }
    cout<<cnt<<endl;return;
    
 
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