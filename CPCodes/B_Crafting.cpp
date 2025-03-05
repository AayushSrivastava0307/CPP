#include<bits/stdc++.h>
using namespace std ;
#define int int64_t
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve()
{
 
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    int asum=accumulate(a.begin(),a.end(),0LL);
    int bsum=accumulate(b.begin(),b.end(),0LL);
    if(bsum>asum){ //basic case
        cout<<"NO"<<endl;
        return; 
    }
    int lg=0;
    int idx=0;
    for(int i=0; i<n;i++) {
        if(a[i]<b[i]){
            idx=i;
            lg=max(lg,abs(a[i]-b[i]));
        }
    } 
    bool flag=false;
    for(int i=0;i<n;i++) {
        if(i!=idx &&(a[i]-lg)<b[i]){
            flag=true;
            break;
        }
    }
    string s=(flag)?"NO":"YES";
    cout<<s<<endl;
 

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