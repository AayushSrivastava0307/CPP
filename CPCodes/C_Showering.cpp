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
    
    int n,s,m;
    cin>>n>>s>>m;
    int a[2*n+2];
    a[0]=0;
    a[2*n+1]=m;
    for(int i=1;i<2*n+1;i++){
        cin>>a[i];
    }
    int diff=0;
    int maxdiff=0;
    for(int i=0;i<2*n+2;i++){
        if(i==2*n+1){
            diff=a[2*n+1]-a[2*n];
        }
        else{
            diff=a[i+1]-a[i];
            if(diff>maxdiff){
            maxdiff=diff;
        }
        }
        i++;

    }
    if(maxdiff>=s) {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
 
 
 
int32_t main(){

    int t ; cin>>t ;

    while(t--){
        
        solve();
    }
}