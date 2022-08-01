#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/
#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
ll n{};
ll memo[10000000];
ll dp(ll i,vector<ll>&a){
if(i==n-1){
    return 0;
}
if(memo[i]!=-1){
    return memo[i];
}
memo[i]=INT64_MAX;
memo[i]=min(memo[i], (dp(i+1,a)+ abs(a[i]-a[i+1])));
if(i+2<=n-1){
    memo[i]= min(memo[i],(dp(i+2,a)+ abs(a[i]-a[i+2])));
}
    return memo[i];

}

void result() {
    cin>>n;
    vector<ll>a(n);
    for (int k = 0; k < n; ++k) {
        cin>>a[k];
    }
    memset(memo,-1,sizeof (memo));
    cout<<dp(0,a);
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