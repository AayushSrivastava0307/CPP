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
    
     char board[8][8];
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            cin>>board[i][j];
        }
    }
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j <8; j++)
        {
            if (board[i][j] == '#' && board[i - 1][j - 1] == '#' && board[i - 1][j + 1] == '#' && board[i + 1][j - 1] == '#' &&
                board[i + 1][j + 1] == '#') {
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
 
}
 
 
 
int32_t main(){

    int t ; cin>>t ;

    while(t--){
        
        solve();
    }
}