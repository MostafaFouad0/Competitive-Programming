/*
 * Created By : Mostafa Mahmoud
*/

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 1e5 + 9;
void result() {
    ll n{},m{};
    cin>>n>>m;
    ll a[n][m];
    ll l{},r{};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
        }
    }
    cin>>l>>r;
    ll ans=INT64_MAX;
    for (int op = 0; op <2 ; ++op) {
        for (int i = 0; i <=n-l; ++i) {
            for (int j = 0; j <=m-r ; ++j) {
                ll c{};
                // calculating all the Possibilities
                for (int k = 0; k < l; ++k) {
                    for (int i1 = 0; i1 < r; ++i1) {
                        c+=a[i+k][j+i1];
                    }
                }
                // choosing the minimum between all the Possibilities
                ans=min(ans,c);
            }
        }
        // (lxr) or (rxl)
        swap(l,r);
    }
    cout<<ans;


}


int main() {
    sareeeee3
    ll tc = 1;
    //cin >> tc;
    while (tc--) {
        result();
        cout << "\n";
    }
}
