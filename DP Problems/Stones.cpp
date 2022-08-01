#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 1e6;


void result() {
    ll n{}, k{};
    cin >> n >> k;
    ll dp[k + 1];
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    memset(dp, 0, sizeof dp);
    for (int i = 1; i <= k; ++i) {
        for (auto it: a) {
            if (i - it >= 0) {
                dp[i] |= (dp[i - it]) ^ 1;
            }
        }
    }
    if (dp[k]) {
        cout << "First";
        return;
    }
    cout << "Second";


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