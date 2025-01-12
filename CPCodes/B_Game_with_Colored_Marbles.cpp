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
 
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    map<int,int> mpp;
    for(auto &e:v){
        mpp[e]++;
    } 
    multiset<int> st;
    for(auto &e:mpp){
        st.insert(e.second);
    }
    int pts=0;
    bool used=false;
    while(!st.empty()){
        auto it=st.begin();
        if(*it==1 && used==false){
            pts+=2;
            st.erase(it);
            used=true;
        }
        else if(*it==1 && used==true){
            st.erase(it);
            used=false;
        }
        else{
            pts+=1;
            st.erase(it);
        }

    }
   
    
    cout<<pts<<endl;
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