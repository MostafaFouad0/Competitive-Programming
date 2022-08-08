/*
 * Created By : Mostafa Mahmoud
*/

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 2e5 + 9;

void result() {
    string s;
    cin >> s;
    ll p{};
    cin >> p;
    ll n = s.size();
    priority_queue<pair<ll, ll>> pq;
    ll sum{};
    for (int i = 0; i < n; ++i) {
        pq.push({s[i] - 'a' + 1, i});
        sum += s[i] - 'a' + 1;
    }
    vector<ll> del(n + 1);
    while (sum > p) {
        auto top = pq.top();
        pq.pop();
        sum -= top.first;
        del[top.second] = 1;
    }
    for (int i = 0; i < n; ++i) {
        if (!del[i]) {
            cout << s[i];
        }
    }


}


int main() {
    sareeeee3
    ll tc = 1;
    cin >> tc;
    while (tc--) {
        result();
        cout << "\n";
    }
}