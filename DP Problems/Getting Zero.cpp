/*
 * Created By : Mostafa Mahmoud
*/

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 1e5;
ll MOD = 32768;
ll a[N];
ll n{};
ll memo[N][20];


ll dp(ll x,ll s=0){
    if(x==0){
        return s;
    }
    if(s >15){
        return s;
    }
    ll &ret=memo[x][s];
    if(ret!=-1){
        return ret;
    }
    ll op1= dp((x+1)%MOD,s+1);
    ll op2= dp((x*2)%MOD,s+1);
    ret=min(op1,op2);
    return ret;

}


void result() {
    cin>>n;

    for (int i = 0; i < n; ++i) {
            cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
        cout<<dp(a[i])<<" ";
    }




}


int main() {
    memset(memo,-1,sizeof memo);
    sareeeee3
    ll tt = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
   // cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}