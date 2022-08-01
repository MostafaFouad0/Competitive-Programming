#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 1e3 + 7;
ll n{};
ll a[N];
ll memo[N][N];

ll dp(ll i = 0, ll last = 0) {
    if (i == n) {
        return 0;
    }
    ll &ret = memo[i][last];
    if (ret != -1) {
        return ret;
    }
    ret= dp(i+1,last);
    if(a[i]>last){
        ret= max(ret, dp(i+1,a[i])+1);
    }
    return ret;
}


void result() {
    memset(memo, -1, sizeof memo);

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << dp();


}


int main() {
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