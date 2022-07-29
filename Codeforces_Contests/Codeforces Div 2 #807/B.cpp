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
    ll n{};
    cin >> n;
    ll a[n];
    ll pos{};
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i]) {
            pos++;
        }
    }
    if (pos == 1) {
        if (a[n - 1] > 0) {
            cout << "0";
            return;
        }
    }
    ll c{};
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0 && a[i - 1] != 0 && i != 0) {
            a[i]++;
            a[i - 1]--;
            c++;
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        if (a[i]) {
            c += a[i];
        }
    }
    cout << c;


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