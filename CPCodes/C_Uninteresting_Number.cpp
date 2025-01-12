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
 
    string s;
    cin>>s;
    int sumd=0;
    int c2=0;
    int c3=0;
    for(int i=0;i<s.size();i++){
        sumd+=(s[i]-'0');
        if(s[i]=='2'){
            c2++;
        }
        if(s[i]=='3'){
            c3++;
        }
    }
    int rem=sumd%9;
    //rem+6x+2y%9=0
    //1,2,3,4,5,6,7,8
    for (int x = 0; x < 9; x++) {
        for (int y = 0; y < 9; y++) {
            if ((rem + 6*x + 2*y) % 9 == 0) {
               if(x<=c3 && y<=c2){
                cout<<"YES"<<endl;
                return;
               }
            }
        }
    }
    cout<<"NO"<<endl;



 
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