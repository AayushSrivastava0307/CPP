#include<bits/stdc++.h>
using namespace std ;
#define int int64_t
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve()
{
 
    int l;cin>>l;
    int r;cin>>r;
    bitset<33> abinary=l,bbinary=r; //32+1 size taken(0 based indexing)
    //finding a and b optimal
    //greedy , we first find the different most significant bit , and 
    // start changing bbinary's bits to 0 starting from one bit ahead of the different
    //most significant bit
    //similary change abinary's bits to 1 ( these ensure a and b remain in l to r range)
    // and xor is max
    for(int i=32;i>=0;i--){
        if(abinary[i]==0 && bbinary[i]==1){
            for(int start=i-1; start>=0;start--){
                abinary[start]=1;
                bbinary[start]=0;
            }
            int a = abinary.to_ullong(), b = bbinary.to_ullong(); // binary to decimal
            cout<<a<< " " <<b<<" ";
            //now findling optimal c
            // c can be any number that is in l to r but no a or b
            // as xor will automatically be max 
            for(int c=l; c<= r; c++){
                if(c!= a && c!= b){
                    cout<<c<< endl;
                    return;
                }
            }
        }
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