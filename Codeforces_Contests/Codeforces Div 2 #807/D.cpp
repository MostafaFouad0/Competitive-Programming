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
    ll n{};
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<ll> v1;
    vector<ll> v2;
    if (s[0] != t[0] || s[s.size() - 1] != t[t.size() - 1]) {
        cout << -1;
        return;
    }
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            v1.emplace_back(i);
        }
        if (t[i] != t[i - 1]) {
            v2.emplace_back(i);
        }
    }
    if (v1.size() != v2.size()) {
        cout << -1;
        return;
    }
    ll ans{};
    for (int i = 0; i < v1.size(); ++i) {
        ans += (abs(v1[i] - v2[i]));
    }
    cout << ans;


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