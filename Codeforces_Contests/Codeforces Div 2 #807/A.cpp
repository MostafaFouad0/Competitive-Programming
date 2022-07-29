/*
 * Created By : Mostafa Mahmoud
*/

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 2e6 + 9;

// during contest
void result() {
    ll n{}, m{};
    cin >> n >> m;
    n *= 2;
    ll a[n];
    vector<ll> v1;
    vector<ll> v2;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i >= n / 2; --i) {
        v1.emplace_back(a[i]);
    }
    for (int i = 0; i < n / 2; ++i) {
        v2.emplace_back(a[i]);
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (abs(v1[i] - v2[v2.size() - 1 - i]) >= m) {
            continue;
        } else {
            cout << "NO";
            return;
        }
    }
    cout << "YES";


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