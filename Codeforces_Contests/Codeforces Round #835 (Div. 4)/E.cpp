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
ll n{};

ll calc(vector<ll> &a) {
    ll n = a.size();
    ll ans{}, cnt1{};
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            ans += cnt1;
        } else {
            cnt1++;
        }
    }
    return ans;
}

void result() {
    cin >> n;
    vector<ll> a(n);
    ll l = -1, r = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0 and l == -1) {
            l = i;
        } else if (a[i] == 1) {
            r = i;
        }
    }
    ll ret= calc(a);
    vector<ll>tmp1=a;
    vector<ll>tmp2=a;
    if(l!=-1){
        tmp1[l]=1;
        ret= max(ret, calc(tmp1));
    }
    if(r!=-1){
        tmp2[r]=0;
        ret= max(ret, calc(tmp2));
    }
    cout<<ret;


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
