#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define srt(x) sort(x.begin(),x.end())
#define vint vector<int> 
#define all(x) x.begin(),x.end()
#define int long long
#define ff first 
#define ss second
 
//----------------------------------------------------------------------------------------------
void dbg_out(){cerr << endl;}
    template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//----------------------------------------------------------------------------------------------
 
 
void solve(){
    int n;
    cin>>n;
    int p,q;
    cin>>p;
     int X[100];
    for(int i=0;i<p;i++){
        cin>>X[i];
    }
    cin>>q;
    int Y[100];
    for(int i=0;i<q;i++){
        cin>>Y[i];
    }
    int merged[200];
    for(int i=0;i<p;i++){
        merged[i]=X[i];
    }
    for (int j=0;j<q;j++){
        merged[p+j]=Y[j];
    }
   
     
     sort(merged,merged+(p+q));//array sorting//
    //  cout<<endl;
    // for (int i=0;i<p+q;i++){
    //     cout<<merged[i]<<" ";
    //  } 
    //  cout<<endl;
    //checking
    int sum=0;
    for(int i=0;i<p+q;i++){
        if(i==0){
            sum+=merged[i];
        }
        else if(merged[i]==merged[i-1]){
            sum=sum;
        }
        else if(merged[i]!=merged[i-1]){
            sum+=merged[i];
        }
    }
    //checking
    // cout<<sum<<endl; 
    if (sum==n*(n+1)/2){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}
 

 
 
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        
        solve();
    
}