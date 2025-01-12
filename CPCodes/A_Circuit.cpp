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
    vector<int> v(2*n);
    int ones=0;
    for(int i=0;i<2*n;i++){
        cin>>v[i];
        if(v[i]==0){
            ones++;
        }
    }
    int zeros=2*n-ones;
    if(ones==2*n || zeros==2*n){
        cout<<"0 0\n";
        return;
    }
    int maxon=min(zeros,ones);
    int minon=zeros/2+(ones/2);
    cout<<n-minon<<" "<<maxon<<endl;

 
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
