#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/
#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
ll n{};
ll memo[10000000];
ll dp(ll i,vector<ll>&a,ll k){
    if(memo[i]!=-1){
        return memo[i];
    }
    if(i==n-1){
        return 0;
    }
    memo[i]=INT64_MAX;
    for (int j = 1; j <=k ; ++j) {
        if(i+j<=n-1) {
            memo[i] = min(memo[i], dp(i + j, a, k) + abs(a[i] - a[j+i]));
        }
    }
    return memo[i];
}

void result() {
    ll k{};
    cin>>n>>k;
    vector<ll>a(n);
    for (int k = 0; k < n; ++k) {
        cin>>a[k];
    }
    memset(memo,-1,sizeof (memo));
    cout<<dp(0,a,k);
}




int main ()
{
    sareeeee3
    ll t=1;
    //cin>>t;
    while(t--) {
        result();
        cout<<"\n";
    }
}