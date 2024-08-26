#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve(){
 
    int l,r,a;
    cin>>l>>r>>a;
    int q1=l/a; //quotient
    int q2=r/a;
    int r1=l%a;//remainder
    int r2=r%a;
    if(q1==q2){
        cout<<q2+r2<<endl;
    }
    else{
        cout<<(((q2+r2)>(q2-1+a-1))?(q2+r2):(q2-1+a-1))<<endl;
    }
}
 
 
 
signed main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc=1;
    cin>>tc;
 
    while(tc--){
        solve();
    }
return 0;
}