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
 
    int w,h;
    int k1,k2,k3,k4;
    cin>>w>>h;
    cin>>k1;
    vector<int> xwithy0(k1);
    for(int i=0;i<k1;i++){
        cin>>xwithy0[i];
    }
    cin>>k2;
    vector<int> xwithyh(k2);
    for(int i=0;i<k2;i++){
        cin>>xwithyh[i];
    }
    cin>>k3;
    vector<int> ywithx0(k3);
    for(int i=0;i<k3;i++){
        cin>>ywithx0[i];
    }
    cin>>k4;
    vector<int> ywithxw(k4);
    for(int i=0;i<k4;i++){
        cin>>ywithxw[i];
    }
    int option1=(xwithy0.back()-xwithy0.front())*h;
    int option2=(xwithyh.back()-xwithyh.front())*h;
    int option3=(ywithx0.back()-ywithx0.front())*w;
    int option4=(ywithxw.back()-ywithxw.front())*w;
    cout<<max({option1,option2,option3,option4})<<endl;

 
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