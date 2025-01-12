#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//

int modfact(int n, int p)
{
    if (n >= p)
        return 0;
    int result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % p;
    return result;
}
void solve()
{
 
    int n;cin>>n;
    int d;cin>>d;
    vector<int> v;
    v.push_back(1);
   if(d==3 || d==6 || d==9 || (modfact(n,3)==0)){
    v.push_back(3);
   }
   if(d==5){
    v.push_back(5);
   }
   if(d==7 || (modfact(n,6)==0)){
    v.push_back(7);
   }
   if((d==9) || ((d==6 || d==3) && modfact(n,3)==0) || (modfact(n,9)==0)){
    v.push_back(9);
   }
    for(auto &e:v){
        cout<<e<<" ";
    }
    cout<<endl;

 
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