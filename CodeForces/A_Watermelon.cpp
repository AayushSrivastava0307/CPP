#include<bits/stdc++.h>
 
using namespace std ;
using ll = long long ;
#define srt(x) sort(x.begin(),x.end())
#define vint vector<int> 
#define all(x) x.begin(),x.end()
#define int long long
#define ff first 
#define ss second
 
//----------------------------------------------------------------------------------------------
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------
 
 
void solve(){
    int x;
    if(x==2){
        cout<<"NO";
    }
    else if (x%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

 
}
 
 
 
int32_t main(){
        
        solve();
    
}