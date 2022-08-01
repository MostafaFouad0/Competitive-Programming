#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N=1e2;
const int M=1e5;
ll memo[N][M];
ll n{};
ll a[N];
ll b[N];
ll dp(ll w,ll i=0){
    if(i==n){
        return 0;
    }
    ll &ret=memo[i][w];
    if(~ret){
        return ret;
    }
    ret=max(ret, dp(w,i+1));
    if(a[i]<=w){
        ret= max(ret, dp(w-a[i],i+1)+b[i]);
    }
    return ret;

}



void result() {
    ll w{};
    cin>>n>>w;
    memset(memo,-1,sizeof (memo));

    for (int i = 0; i < n; ++i) {
        cin>>a[i]>>b[i];
    }
    cout<<dp(w);



}


int main() {
    sareeeee3
    ll t = 1;
    //freopen("machines.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //cin >> t;
    while (t--) {
        result();
        cout << "\n";
    }
}