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
    vector<int> v(n);
    for(auto &e:v){
        cin>>e;
    }
    int max=0;
    int mi;
    for(int i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
            mi=i;
        }
        else if(v[i]==max && i%2==0){
            mi=i;
        }

    }
    
    if(n%2==0){
        cout<<max+n/2<<endl;
        return;
    }
    else if(n%2!=0 && mi%2!=0){
        cout<<max+n/2<<endl;
        return;
    }
    else if(n%2!=0 && mi%2==0){
        cout<<max+n/2+1<<endl;
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