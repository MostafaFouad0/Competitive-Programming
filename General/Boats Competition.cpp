#include<bits/stdc++.h>
/*
 *
 * Created By : Mostafa Mahmoud
 *
 */

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 1e3 + 5;


void result() {
    ll n{};
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    ll mx = a[n - 1] + a[n - 2];
    ll mn = a[0] + a[1];
    ll ans{};
    if(n==1){
        cout<<0;
        return;
    }
    for (int i = mn; i <= mx; ++i) {
        ll tmp{};
        vector<bool>vis(52);
        for (int j = 0; j < n; ++j) {
            if(a[j]>i){
                break;
            }
            for (int k = 0; k <n ; ++k) {
                if(a[j]+a[k]==i &&j!=k && !vis[k] && !vis[j]){
                    vis[k]=true;
                    vis[j]=true;
                    tmp++;
                    break;
                }
            }
        }
        ans= max(ans,tmp);
    }
    cout<<ans;


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