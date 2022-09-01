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
    string s;
    cin >> s;
    ll ans{};
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'L') {
            ans += i;
        } else if(s[i]=='R'){
            ans += n - i -1;
        }
    }
    ll tmp2{};
    for (int i = 0; i < n / 2; ++i) {
        ll tmp = n - i - 1;
        if(s[i]=='L'){
            tmp2++;
            ans-=i;
            ans+=(n-i-1);
            cout<<ans<<" ";
        } if(s[tmp]=='R'){
            tmp2++;
            ans-=(n-tmp-1);
            ans+=tmp;
            cout<<ans<<" ";
        }
    }
    for (ll i = tmp2; i <n ; ++i) {
        cout<<ans<<" ";
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