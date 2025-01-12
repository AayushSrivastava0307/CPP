#include<bits/stdc++.h>
using namespace std ;
#define int long long
 
 
 
//--------------------------------------------------Debuggger-----------------------------------------------------//
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------//
 
int maxSubArray(vector<int> &v,int start,int end) {
        int n=v.size();
        int sum=0;
        int maxsum=LLONG_MIN;
        for(int i=start;i<end;i++){
            sum+=v[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
        }
        int ans=(maxsum<0)?0:maxsum; //for empty subarray (optional)
        return ans;
    }
int minSubArray(vector<int> &v,int start,int end) {
        int n=v.size();
        int sum=0;
        int minsum=LLONG_MAX;
        for(int i=start;i<end;i++){
            sum+=v[i];
            minsum=min(sum,minsum);
            if(sum>0){
                sum=0;
            }
        }
        int ans=(minsum>0)?0:minsum; //for empty subarray (optional)
        return ans;
    }

void solve()
{
 
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &e:v){
        cin>>e;
    }
    int brki=-1;
    int extra=-1;
    for(int i=0;i<n;i++){
        if(v[i]!=1 && v[i]!=-1){
            extra=v[i];
            brki=i;//extra elements index
            break;
        }
    }
    if(brki==-1){
        set<int> ans;
        int rangeR=maxSubArray(v,0,n);
        int rangeL=minSubArray(v,0,n);
        for(int i=rangeL;i<=rangeR;i++){
            ans.insert(i);
        }
        cout<<ans.size()<<endl;
        for(auto &e:ans){
            cout<<e<<" ";
        }
        cout<<endl;
        return;
    }
    else{
    set<int> ans;
    int prefix=0;
    int minL=INT_MAX;
    int maxL=INT_MIN;
    for(int i=brki-1;i>=-0;i--){
        prefix+=v[i];
        minL=min(minL,prefix);
        maxL=max(maxL,prefix);
    }
    maxL=max(0LL,maxL);
    minL=min(0LL,minL);
    
    int suffix=0;
    int minR=INT_MAX;
    int maxR=INT_MIN;
    for(int i=brki+1;i<=n-1;i++){
        suffix+=v[i];
        minR=min(minR,suffix);
        maxR=max(maxR,suffix);
    }
    maxR=max(0LL,maxR);
    minR=min(0LL,minR);
    int RANGEL=minL+minR+extra;
    int RANGER=maxL+maxR+extra;
    for(int i=RANGEL;i<=RANGER;i++) ans.insert(i);
    int Lmax=maxSubArray(v,0,brki);
    int Lmin=minSubArray(v,0,brki);
    for(int i=Lmin;i<=Lmax;i++){
        ans.insert(i);
    }
    int Rmax=maxSubArray(v,brki+1,n);
    int Rmin=minSubArray(v,brki+1,n);
    for(int i=Rmin;i<=Rmax;i++){
        ans.insert(i);
    }
    cout<<ans.size()<<endl;
        for(auto &e:ans){
            cout<<e<<" ";
        }
    cout<<endl;
    return;
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
