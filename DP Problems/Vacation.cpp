#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const ll sizz=1e7;
ll memo[sizz][3];
ll a[sizz][3];
ll n{},m{};
ll dp(ll i,ll check){
    if(i==n){
        return 0;
    }
    if(memo[i][check]!=-1){
        return memo[i][check];
    }
    for (int j = 0; j < 3; ++j) {
        if(j!=check){
            memo[i][check]= max(memo[i][check],dp(i+1,j)+a[i][j]);
        }
    }
    return memo[i][check];



}


void result() {
    cin>>n;
    memset(memo,-1,sizeof (memo));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin>>a[i][j];
        }
    }
    cout<<dp(0,3);




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