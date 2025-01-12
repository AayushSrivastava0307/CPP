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
 
    int p1,p2,p3;
    cin>>p1>>p2>>p3;
    vector<int> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    if((p1+p2+p3)%2!=0){
        cout<<-1<<endl;
    }
    else {
        int max=0;
        while(v[0]!=0 || v[1]!=0){
            int largest=v[2];
            int secondlargest=v[1];
            if(largest!=0 && secondlargest!=0){
                max++;
                v[2]--;
                v[1]--;
                sort(v.begin(),v.end());
            }
        }
        cout<<max<<endl;
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