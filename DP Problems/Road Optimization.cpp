#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 600 + 7;


ll cor[N];
ll signs[N];
ll memo[N][N];
ll n{},l{},k{};

ll dp(ll i,ll rem){
    if(rem < 0){
        return INT_MAX;
    }
    if(i==n){
        return 0;
    }
    ll &ret=memo[i][rem];
    if(ret!=-1){
        return ret;
    }
    ret =signs[i]*(cor[i+1]-cor[i])+ dp(i+1, rem);
    for (ll j = i+1; j <n ; ++j) {
        ret=min(ret, dp(j+1, rem - (j - i)) + signs[i] * (cor[j + 1] - cor[i]));
    }
    //cout<<ret<<"\n";
    return ret;

}

void result() {
    memset(memo,-1,sizeof memo);
    cin>>n>>cor[n]>>k;
    for (int i = 0; i < n; ++i) {
        cin>>cor[i];
    }
    for (int i = 0; i < n; ++i) {
        cin>>signs[i];
    }
    cout<<dp(0,k);




}


int main() {
    sareeeee3
    ll tt = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}