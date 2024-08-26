#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//DEBUGGER
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//DEBUGGER
 
 
 
void solve(){
    
    int xc,yc,k;
    cin>>xc>>yc>>k;
    if(k==1){
        cout<<xc<<" "<<yc<<endl;;
    }
    else if(k%2!=0){
        cout<<xc<<" "<<yc<<endl;
        for(int i=1;i<(k-1)/2+1;i++){
            cout<<xc-i<<" "<<yc-i<<endl;
            cout<<xc+i<<" "<<yc+i<<endl;
            dbg(i);
        }
        }
    else if(k%2==0){
        for(int i=1;i<k/2+1;i++){
            cout<<xc-i<<" "<<yc-i<<endl;
            cout<<xc+i<<" "<<yc+i<<endl;
        }

    }
 
}
 
 
 
signed main(){
 
    int tc=1;
    cin>>tc;
 
    while(tc--){
        solve();
    }
return 0;
}
