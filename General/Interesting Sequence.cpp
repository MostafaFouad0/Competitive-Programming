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
const int N = 305;
const int M = 2 * 9e4 + 6;
const int add = 9e4;
const ll mod = 998244353;
#define deb(x) cout<<#x<<"="<<x<<"\n";
ll n{},x{};


ll calc(ll mid){
    ll ans{};
    for (int i = 63; i>=0 ; --i) {
        if((n&(1ll<<i))==(mid&(1ll<<i))){
            ans+=(mid&(1ll<<i));
        }else{
            break;
        }
    }
    return ans;
}

void result() {
    cin>>n>>x;
    ll l=n,r=5e18,mid{},ans=-1;
    while (l<=r){
        mid=(r-l)/2+l;
        ll ret= calc(mid);
        if(ret<x){
            r=mid-1;
        }else if(ret>x){
            l=mid+1;
        }else{
            ans=mid;
            r=mid-1;
        }
//        deb(ans)
    }
    cout<<ans;



}


int main() {
    sareeeee3
    ll tt = 1;
//    freopen("sleepy.in", "r", stdin);
//    freopen("sleepy.out", "w", stdout);
    cin >> tt;
    for (int i = 0; i < tt; i++) {
        result();
        cout << "\n";
    }
}
