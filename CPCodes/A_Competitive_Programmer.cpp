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
    bool by3=false;
int sum=0;
bool atleast0=false;
int evenCount=0;

for(int i=0;i<s.size();i++){
    int digit = s[i]-'0';
    sum += digit;
    if(digit == 0) atleast0 = true;
    if(digit % 2 == 0) evenCount++;
}

by3 = (sum % 3 == 0);

if(sum == 0) {
    cout<<"red\n";
} else if(by3 && atleast0 && evenCount > 1) {
    cout<<"red\n";
} else {
    cout<<"cyan\n";
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