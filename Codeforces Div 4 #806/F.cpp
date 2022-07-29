/*
 * Created By : Mostafa Mahmoud
 */
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);

using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define ld long double
const int N = 22;


void result() {
    ll n{};
    cin >> n;
    ll a[n + 2];
    ordered_set st;
    ll ans{};
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] < i) {
            ans+=st.order_of_key(a[i]);
            st.insert(i);
        }

    }
    cout<<ans;


}


int main() {
    sareeeee3
    ll tt = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}