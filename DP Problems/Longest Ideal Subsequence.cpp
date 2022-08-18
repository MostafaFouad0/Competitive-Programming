/*
 *
 * Created By : Mostafa Mahmoud
 *
 */
#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 1e5 + 9;
ll memo[N][28];
ll n{};
ll k{};
string s;

ll dp(ll idx = 0, ll lst = 27 ) {
    if (idx == n) {
        return 0;
    }
    ll &ret = memo[idx][lst];
    if (ret != -1) {
        return ret;// calculated answer
    }
    if (lst == 27 || abs(s[idx] - 'a' - lst) <= k) {
        ret = dp(idx + 1, s[idx] - 'a') + 1;
    }
    ret = max(ret, dp(idx + 1, lst));
    return ret;
}


void result() {
    memset(memo, -1, sizeof memo);
    cin >> s >> k;
    n = s.size();
    cout << dp();
}


int main() {
    sareeeee3
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}
