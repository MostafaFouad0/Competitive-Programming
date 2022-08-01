#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 1e6;
const int M = 6;
ll memo[N][M];
int a[5] = {1, 5, 10, 25, 50};

ll dp(ll n, ll i = 0) {
    if (n == 0) {
        return 1;
    }
    if (i > 4) {
        return 0;
    }
    if (n < 0) {
        return 0;
    }
    if (memo[n][i] != -1) {
        return memo[n][i];
    }
    memo[n][i] = dp(n - a[i], i) + dp(n, i + 1);
    return memo[n][i];

}

void result() {
    memset(memo, -1, sizeof memo);
    ll n{};
    while (cin >> n) {
        ll ans=dp(n);
        //cout<<ans<<"\n";
        if (ans!=1) {
            cout << "There are " << ans << " ways to produce " << n << " cents change."<<"\n";
        } else {
            cout << "There is only 1 way to produce "<<n<<" cents change."<<"\n";
        }
    }


}


int main() {
    sareeeee3
    ll tt = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //cin >> tt;
    while (tt--) {
        result();
    }
}