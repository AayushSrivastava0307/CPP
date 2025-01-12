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
    int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int unique[n];
        int uniquecount=0;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j])
                break;
        }

        if (i == j) {
            unique[uniquecount] = a[i];
            uniquecount++;
        }
    }
     cout<<((n-uniquecount)%2==0?uniquecount:uniquecount-1)<<endl;
}
 
 
 
int32_t main(){

    int t ; cin>>t ;

    while(t--){
        
        solve();
    }
}