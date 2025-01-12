#include<bits/stdc++.h>
using namespace std ;
#define int int64_t
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
 struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
void solve()
{
 
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    unordered_map<int,int,custom_hash> mpp;
    for(auto &e:v){
        mpp[e]++;
    }
    vector<int> freq;
    for(auto &e:mpp){
        freq.push_back(e.second);
    }
    sort(freq.begin(),freq.end());
    // for(auto &e:freq){
    //     cout<<e<<" ";
    // }
    if(k==0){
        cout<<freq.size()<<endl;
        return;
    }
    for(int i=0;i<freq.size()-1;i++){
        if(k>=0){
        if(freq[i]<=k){
            freq[freq.size()-1]+=k-freq[i];
            k=k-freq[i];
            freq[i]=0;

        }
        else{
            freq[freq.size()-1]+=k;
            freq[i]=freq[i]-k;
            k=0;
        }
        }
    }
    int cnt=0;
    for(int i=0;i<freq.size();i++){
        if(freq[i]!=0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
 
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