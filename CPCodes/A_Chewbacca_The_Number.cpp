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
    vector<int> v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]-'0');
    }
    for(int i=0;i<s.size();i++){
        if(v[i]>=5 && v[i]){
            v[i]=9-v[i];
        }
    }
    int j=0;
    if(v[0]==0){
        while(v[j]==0){
            v[j]=9;
            j++;
        }
    }
    int k=1;
    if(v[0]==9){
        while(v[k]==9){
            v[k]=0;
            k++;
        }
    }
    for(auto e:v){
        cout<<e;
    }
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