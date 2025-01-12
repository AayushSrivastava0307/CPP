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
    cin >>s;
    if(s[0]>'1'){
        cout<<"NO"<<endl;
    }
    else if(s.size()==3 && s[0]=='1' && s[1]=='0' && s[2]<'2'){
            cout<<"NO"<<endl;
        }
    else if (s.size()>=3 && s[0]=='1' && s[1]=='0' && s[2]!='0' )
    {
        cout<<"YES"<<endl;
        }
    else{
        cout<<"NO"<<endl;
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