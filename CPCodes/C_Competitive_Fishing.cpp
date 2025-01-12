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
 
    int n,k; cin>>n>>k;
    string s; cin>>s;
    // m-1 suffix sums;
    vector<int> v(s.size());
    for(int i=0;i<s.size();i++){
        v[i]=s[i]-'0';
    }
    vector<int> suffscore(n,0);
    suffscore[n-1]=(v[n-1]==1)?1:-1;
    for(int i=n-2;i>=0;i--){
        int toadd=(v[i]==1)?1:-1;
        suffscore[i]=suffscore[i+1]+toadd;
    }
    // ex 1011  2 1 2 1 
    // only border after 2 after 1 after 2  so effectively double counting done 
    // ie 1 2 1;
    vector<int> search(suffscore.begin()+1,suffscore.end());
    // for(auto e:search){
    //     cout<<e<<" ";
    // }
    // cout<<endl;
    // 1 2 1 
    int score=0;
    int m=1;
    sort(search.rbegin(),search.rend());
    for(int i=0;i<n;i++){
        if(score>=k){
            cout<<m<<endl;
            return;
        }
        score+=search[i];
        m++;
    }
    cout<<-1<<endl;


 
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