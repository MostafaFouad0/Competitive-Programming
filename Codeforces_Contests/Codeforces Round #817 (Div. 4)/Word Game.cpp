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
const int N = 1e5 + 9;
ll MOD = 1e3 + 3;
#define deb(x) cout<<#x<<"="<<x<<"\n";

void result() {
    ll n{};
    cin >> n;
    string a[3][n];
    map<string, ll> m;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            m[a[i][j]]++;
        }
    }

    ll c1{}, c2{}, c3{};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            string tmp = a[i][j];
            if (i == 0) {
                if (m[tmp] == 2) {
                    c1 += 1;
                } else if (m[tmp] == 1) {
                    c1 += 3;
                }
            } else if (i == 1) {
                if (m[tmp] == 2) {
                    c2 += 1;
                } else if (m[tmp] == 1) {
                    c2 += 3;
                }

            } else {
                if (m[tmp] == 2) {
                    c3 += 1;
                } else if (m[tmp] == 1) {
                    c3 += 3;
                }

            }
        }
    }
    cout << c1 << " " << c2 << " " << c3;


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