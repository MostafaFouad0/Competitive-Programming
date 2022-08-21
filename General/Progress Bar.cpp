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
    ll n{},k{},t{};
    cin>>n>>k>>t;
    ll full=(t * n / 100);
    long double y=(t*1.0*n*1.0/100);
    ll z=y;
    y-=z; // remaining saturation percentage
    ll tmp=y*k;
    vector<ll>v(200);
    for (int i = 0; i < full; ++i) {
        v[i]=k;
    }
    v[full]=tmp;
    for (int i = 0; i < n; ++i) {
        cout<<v[i]<<" ";
    }




}


int main() {
    sareeeee3
    ll tt = 1;
    //cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}