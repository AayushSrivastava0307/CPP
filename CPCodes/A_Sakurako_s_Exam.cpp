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
 
    int a,b;
    cin>>a>>b;
    if(a==0 && b%2==0){
        cout<<"YES"<<endl;
        return;
    }
    if(a==0 && b%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    if(b==0 && a%2==0){
        cout<<"YES"<<endl;
        return;
    }
    if(b==0 && a%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    if((a+2*b)%2==0){
        cout<<"YES"<<endl;
        return;
    }
    if(a==0 && b==0){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    


 
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