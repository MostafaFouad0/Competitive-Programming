/*
 * Created By : Mostafa Mahmoud
 */
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);

using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define ld long double
const int N = 2e5;
ll a[N];
ll memo[N][40];
ll vis[N][40];
ll vs{};
ll n{}, k{};


ll dp(ll i = 0, ll c = 0) {
    if (i == n) {
        return 0;
    }
    if (c >= 30) {
        return 0;
    }
    ll &ret = memo[i][c];
    if (vis[i][c] == vs) {
        return ret;
    }
    vis[i][c]=vs;
    ll tmp = a[i];
    for (int j = 0; j < c; ++j) {
        tmp /= 2;
    }
    // cout<<tmp<<" tmp\n";
    ret = max(dp(i + 1, c) - k + tmp, dp(i + 1, c + 1) + tmp / 2);
    return ret;
}


void result() {
    vs++;
    cin >> n >> k;
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
    cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}