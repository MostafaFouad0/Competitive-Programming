#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/
#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
ll n{},m{};
 const ll sizz=1e3;
ll MOD=1e9+7;
char a[sizz][sizz];
ll memo[1000][1000];
// function to check if iam still in the grid or not 
bool borders(ll i, ll j){
    return i<n&&j<m;
}

ll dp(ll r, ll c){
    if(r==n-1&&c==m-1){
        return 1;
    }
    // outside the grid or blocked cell
    if(!borders(r,c)||a[r][c]=='#'){
        return 0;
    }
    if(memo[r][c]!=-1){
        return memo[r][c];
    }
    memo[r][c]=(dp(r+1,c)%MOD+ dp(r,c+1)%MOD);
    return memo[r][c]%=MOD;

}



void result() {
    memset(memo,-1,sizeof (memo));
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
        }
    }
    cout<<dp(0,0)%MOD;



}




int main ()
{
    sareeeee3
    ll t=1;
   // cin>>t;
    while(t--) {
        result();
        cout<<"\n";
    }
}