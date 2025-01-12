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
    

    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    int score=0;
    if(a1>b1 && a2>b2) score+=1;
    if(a2>b1 && a1>b2) score+=1;
    if(a2>b2 && a1==b1) score+=1;
    if(a2>b1 && a1==b2) score+=1;
    if(a1>b1 && a2==b2) score+=1;
    if(a1>b2 && a2==b1) score+=1;
    cout<<score*2<<endl;//reverse cases
}
 
 
 
int32_t main(){

    int t ; cin>>t ;

    while(t--){
        
        solve();
    }
}