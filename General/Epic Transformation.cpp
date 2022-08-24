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
const int N = 1e3 + 9;
ll MOD = 1e3 + 3;
#define deb(x) cout<<#x<<"="<<x<<"\n";


void result() {
    ll n{};
    cin>>n;
    ll a[n];
    map<ll,ll>m;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        m[a[i]]++;
    }
    priority_queue<ll>q; // to maintaine the order of the elements
    for(auto it:m){
        q.push(it.S);
    }
    ll ans=n;
    while (q.size()>=2){
        ll f1{},f2{};
        f1=q.top();
        q.pop();
        f2=q.top();
        q.pop();
        f1--;
        f2--;
        ans-=2;
        if(f1){
            q.push(f1);
        }
        if(f2){
            q.push(f2);
        }

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
