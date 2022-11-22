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
ll tbl[N][25];

void build(ll *a, ll n) {
    for (int i = 0; i < n; ++i) {
        tbl[i][0] = a[i];
    }
    for (int j = 1; j < 18; ++j) {
        for (int i = 0; i + (1 << j) - 1 < n; ++i) {
            tbl[i][j] = max(tbl[i][j - 1], tbl[i + (1 << (j - 1))][j - 1]);
        }
    }
}

ll query(ll l,ll r){
    ll mx_pw = log2(r - l + 1);
   return max(tbl[l][mx_pw], tbl[r - (1 << (mx_pw)) + 1][mx_pw]);

}

void result() {
    ll n{};
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    build(a,n);
    for (int i = 0; i < n; ++i) {
        if(i==0){
            cout<<a[i]-query(i+1,n-1)<<" ";
        }else if(i==n-1){
            cout<<a[i]-query(0,n-2)<<" ";
        }else{
            cout<<a[i]-max(query(0,i-1), query(i+1,n-1))<<" ";
        }
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
