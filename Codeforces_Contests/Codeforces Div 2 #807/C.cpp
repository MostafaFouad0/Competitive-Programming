/*
 * Created By : Mostafa Mahmoud
*/

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 2e6 + 9;

// Upsolve
void result() {
    ll n{}, c{}, q{};
    cin >> n >> c >> q;
    vector<ll> l(c), r(c), to(c), from(c);
    string s;
    cin >> s;
    s = '#' + s;
    for (int i = 0; i < c; i++) {
        cin >> l[i] >> r[i];
        if (i == 0) {
            from[i] = n + 1;
        } else {
            from[i] = to[i - 1] + 1;
        }
        to[i] = from[i] + r[i] - l[i];
    }
    while (q--) {
        ll k;
        cin >> k;
        for (ll i = c - 1;; i--) {
            if (k <= n) {
                cout << s[k] << '\n';
                break;
            }
            if (k < from[i]) {
                continue;
            }
            k = k - from[i] + l[i];
        }
    }


}


int main() {
    sareeeee3
    ll tests = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> tests;
    while (tests--) {
        result();
        cout << "\n";
    }
}