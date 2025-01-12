#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 
 
void solve()
{   
    int N;
    cin>>N;
    int count = 0;
    vector<int> A(N);
    for(auto &e:A){
        cin>>e;
    }
    if (N<2) {
        cout<<1;
        return;
    }
    int i = 0;
    int num, d,t;
    d = A[i + 1] - A[i];
    num = 1;
    i = 1;
    while (i < N - 1) {
        if (A[i + 1] - A[i] == d) {
            num++;
        }
        else {
            if (num >= 1) {
                t = num + 1;
                count = count + (t * (t + 1)) / 2 - t;
            }
            num = 1;
            d = A[i + 1] - A[i];
        }
        i++;
    }
 
    if (num >= 1) {
        t = num + 1;
        count = count + (t * (t + 1)) / 2 - t;
    }
 
    cout<<count+N;
 
}
 
 
 
signed main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc=1;
    // cin>>tc;
 
    while(tc--)
    {
        solve();
    }
    return 0;
}