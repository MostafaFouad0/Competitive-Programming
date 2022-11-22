#include<bits/stdc++.h>
/*
*
* Created By : Mostafa Mahmoud
*
*/
#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define F first
#define S second
const int N = 5e5 + 15;
#define deb(x) cout<<#x<<"="<<x<<"\n";


void result() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll,ll>m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a.erase(unique(a.begin(), a.end()), end(a));
    n = a.size();
    int c{}, idx = -1;
    for (int i = 0; i < n - 2; i++) {
        if (a[i] > a[i + 1] && a[i + 1] < a[i + 2]) {
            c++;
            idx = i + 1;
        }
    }
    if (c > 1) {
        cout << "NO";
        return;
    }
    if (a.size() <= 2) {
        cout << "YES";
        return;
    }
    if (c == 1) {
        for (int i = 0; i < idx; i++) {
            if (a[i] < a[i + 1]) {
                cout << "NO";
                return;
            }
        }
        for (int i = idx; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                cout << "NO";
                return;
            }
        }
        cout << "YES";
        return;
    }
    bool f1 = true, f2 = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            f1 = false;
        }
        if (a[i] < a[i + 1]) {
            f2 = false;
        }
    }
    if ((!f1 and f2) or (f1 and !f2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }


}


int main() {
    sareeeee3
    ll tt = 1;
    cin >> tt;
    for (int i = 0; i < tt; i++) {
        result();
        cout << "\n";
    }
}
