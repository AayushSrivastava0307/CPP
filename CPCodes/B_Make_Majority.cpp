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
 
    
    int n;
    cin>>n;
    string a;
    cin>>a;
    if(a.size()==1){
        if(a[0]=='1'){
            cout<<"Yes"<<endl;
            return;
        }
        else{
            cout<<"No"<<endl;
            return;
        }
    }

    int zeros=0, i=0;
    
    while(i<a.length()) {
        if(a[i]=='0') {
            zeros++;
            while(i<a.length()&&a[i]=='0') i++;
        } 
        else {
            i++;
        }
    }


    int ones=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1'){
            ones++;
        }
    }
    if(ones>zeros){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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