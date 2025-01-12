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
    
    int arr[100];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<4;i++){
    //     cout<<arr[i]<<" ";
    // }
    //cout<<endl;
    int store=arr[0];
    sort(arr,arr+4);
    int count=0;
    for(int i=0;i<4;i++){
        if(arr[i]>store){
            count+=1;
        }
    }
    cout<<count<<endl;
}
 
 
 
int32_t main(){

    int t ; cin>>t ;

    while(t--){
        
        solve();
    }
}