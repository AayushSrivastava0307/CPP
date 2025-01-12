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
    cin >> N;

    vector<int> A(N);  
    vector<char> S(N); 

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> S[i];
    }

    int fat = INT_MAX;

    for (int ls = 1; ls <= 100; ++ls) {
        for (int rs = 1; rs <= 100; ++rs) {
            int lpos = ls;
            int rpos = rs;
            int totalfat = 0;

            for (int i = 0; i < N; i++) {
                int key = A[i];
                if (S[i] == 'L') {
                    totalfat += abs(lpos - key);
                    lpos = key;
                } else if (S[i] == 'R') {
                    totalfat += abs(rpos - key);
                    rpos = key;
                }
            }

            fat = min(fat, totalfat);
        }
    }

    cout << fat;
    
 
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