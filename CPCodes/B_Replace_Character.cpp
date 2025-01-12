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
 
    int n; cin>>n;
    string s; cin>>s;
    set<char> st;
    for(int i=0; i<s.size();i++){
        st.insert(s[i]);
    }
    int distinct=st.size();
    //max repeated
    unordered_map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        if(mpp.find(s[i])==mpp.end()){
            mpp[s[i]]=1;
        }
        else{
            mpp[s[i]]++;
        }
    }
    char highchar = '\0', lowchar = '\0';
    int highest = 0, lowest = INT_MAX;
    for (auto &entry : mpp) {
        if (entry.second > highest) {
            highest = entry.second;
            highchar = entry.first;
        }
        if (entry.second < lowest) {
            lowest = entry.second;
            lowchar = entry.first;
        }
    }
    // cout<<lowchar<<" "<<highchar<<endl;
    if(lowchar==highchar){
        for(int i=0;i<n;i++){
            if(s[i]!=highchar && s[i]!=lowchar){
                s[i]=highchar;
                cout<<s<<endl;
                return;
            }
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]==lowchar){
            s[i]=highchar;
            break;
        }
    }
    cout<<s<<endl;



 
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