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
    int t;
    cin>>t;
    string s;
    int x=0;
    for(int i=0;i<t;i++){
         cin>>s;
        if(s=="++X" || s=="X++"){
        x=x+1;
        }
        else if(s=="--X" || s=="X--"){
        x=x-1;
        }
    }
    cout<<x;
    
 
}
 
 
 
int32_t main(){
        solve();
}