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
ll n{}, c{},d{};

ll ok(ll mid,vector<ll>&a){
    ll sum1{},sum2{},end=min(mid,n),end2= min(d%mid,n);
    for (int i = 0; i < end; ++i) {
        sum1+=a[i];
    }
    for (int i = 0; i <end2 ; ++i) {
        sum2+=a[i];
    }
    return (d/mid)*sum1+sum2>=c;
}

void result() {

    cin >> n >> c >> d;
    vector<ll>a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.rbegin(),a.rend());
    ll st{},ed=1e18,mid{},ans{};
    while (st<ed){
        mid=(st+ed+1)/2;
        if(ok(mid,a)){
            st=mid;
            ans=mid-1;
        }else{
            ed=mid-1;
        }
    }
    if(st==0){
        cout<<"Impossible";
        return;
    }
    if(st==1e18){
        cout<<"Infinity";
        return;
    }
    cout<<ans;



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
