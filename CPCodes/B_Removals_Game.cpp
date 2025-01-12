#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve(){
 
    int n;
    cin>>n;
    int Bob[n];
    int Alice[n];
    for(int i=0;i<n;i++){
        cin>>Alice[i];
    }

    for(int i=0;i<n;i++){
        cin>>Bob[i];
    }
    bool sameflag=true;
    bool revflag=true;
    for(int i=0;i<n;i++){
        if(Alice[i]==Bob[i]){
            sameflag=true;
        }
        else{
            sameflag=false;
        }
    }
    cout<<sameflag<<endl;
    for(int i=0;i<n;i++){
        if(Alice[i]==Bob[n-i-1]){
            revflag=true;
        }
        else{
            revflag=false;
        }
    }
    if(sameflag==true || revflag==true){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
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