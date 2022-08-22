#include<bits/stdc++.h>
/*
*
* Created By : Mostafa Mahmoud
*
*/

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 1e5 + 9;
ll MOD = 1e5 + 3;
#define deb(x) cout<<#x<<"="<<x<<"\n";
vector<ll>adj[N];
void result() {
    ll n{},p{};
    cin>>n>>p;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        adj[i].clear();
    }
    for (int i = 0; i < p; ++i) {
        ll x,y;
        cin>>x>>y;
        x--,y--;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }
    if(p%2==0){
        cout<<0;
        return;
    }
    ll ans=INT64_MAX;
    for (int i = 0; i < n; ++i) {
        if(adj[i].size()%2){
            ans=min(ans,a[i]);
        }else{
            for(auto it:adj[i]){
                if(adj[it].size()%2==0){
                    ans= min(ans,a[it]+a[i]);
                }

            }
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