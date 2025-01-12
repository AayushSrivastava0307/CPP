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
 
    int n;cin>>n;
    vector<int> v(n);
    for(auto &e:v)cin>>e;
    bool issorted=true;
    for(int i=1;i<n;i++){   
        if(v[i]<v[i-1]){
            issorted=false;
            break;
        }
    }
    if(issorted){
        cout<<0<<endl;return;
    }
    
    vector<int> maxi(n,v[0]);
    for(int i=1;i<n;i++)
    {
        maxi[i]=max(maxi[i-1],v[i]);
    }
    vector<int> diff(n);
    for(int i=0;i<n;i++){
        diff[i]=(maxi[i]-v[i]);
    }
    int sum=accumulate(diff.begin(),diff.end(),0ll);
    int maxdiff=*max_element(diff.begin(),diff.end());
    cout<<sum+maxdiff<<endl;
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