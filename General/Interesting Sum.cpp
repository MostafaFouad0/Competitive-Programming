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


void result() {
    ll n{};
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    ll x=a[0];
    ll y=a[n-1];
    ll x2=a[1];
    ll y2=a[n-2];
    cout<<(y-x)+(y2-x2);







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