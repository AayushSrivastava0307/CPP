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
    int num;
    cin>>num;
    bool flag=true;
    string s=to_string(num);
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0'){
            flag=false;
            break;
        }
    }
    char firstdigit=s[0];
    if(firstdigit!='1'){
        flag=false;
    }
    char lastdigit=s[s.size()-1];
    if(lastdigit=='9'){
        flag=false;
    }
    if(flag==true){
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