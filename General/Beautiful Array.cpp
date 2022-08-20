#include<bits/stdc++.h>
/*
*
* Created By : Mostafa Mahmoud
*
*/

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 1e5 + 5;
#define deb(x) cout<<#x<<"="<<x<<"\n";


void result() {
    ll n{}, k{}, b{}, s{};
    cin >> n >> k >> b >> s;
    ll r = s, l = 0, ans = -1;
    while (r >= l) {
        // largest num --> (num/k) equals to b
        ll mid = (r + l) / 2;
        if (mid / k == b) {
            ans = mid;
            l = mid + 1;
        } else if (mid / k < b) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }

    }
    if (ans == -1) {
        cout << -1;
        return;
    }
    s -= ans;
    vector<ll> v(n);
    v[0] = ans;
    for (int i = 1; i < n; ++i) {
        ll tmp = min(s, k - 1);
        s -= tmp;
        v[i] = tmp;
    }
    if (s != 0) {
        cout << -1;
        return;
    }
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
}


int main() {
    sareeeee3
    ll tt = 1;
    cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}