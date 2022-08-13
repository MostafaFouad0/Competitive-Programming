/*
 *
 * Created By : Mostafa Mahmoud
 *
 */
#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 2e5 + 9;


void result() {
    ll n{};
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    ll tmp{},ans{};
    for (int i = 0; i <n; ++i) {
        if(tmp<=a[i]){
            tmp+=a[i];
            ans++;
        }
    }
    cout<<ans;



}


int main() {
    sareeeee3
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}