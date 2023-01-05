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
const int N = 1e6 + 5;
const ll mod = 1e9 + 7;
#define deb(x) cout<<#x<<"="<<x<<"\n";
void result() {
    ll n{},m{};
    cin>>n>>m;
    vector<vector<ll>>a(n,vector<ll>(m,0));
    ll sum[n];
    memset(sum,0,sizeof sum);
    ll tot{};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
            sum[i]+=a[i][j];
            tot+=a[i][j];
        }
    }
    if(tot%n!=0){
        cout<<-1<<"\n";
        return;
    }
    vector<pair<pair<ll,ll>,ll>>ans;
    tot/=n;
    for (int j = 0; j < m; ++j) {
        vector<ll>big;
        vector<ll>small;

        for (int i = 0; i < n; ++i) {
//            deb(i)
//            deb(sum[i]);
            if(sum[i]>tot and a[i][j]){
                big.emplace_back(i);
            }
            if(sum[i] < tot and !a[i][j]){

                small.emplace_back(i);
            }
        }
        ll len=min(small.size(),big.size());
        for (int i = 0; i < len; ++i) {
            sum[big[i]]--,sum[small[i]]++;
            pair<pair<ll,ll>,ll>tmp;
            tmp.first.first=big[i];
            tmp.first.second=small[i];
            tmp.second=j;
            ans.emplace_back(tmp);
        }
    }
    cout<<ans.size()<<"\n";
    for (int i = 0; i < ans.size(); ++i) {
        cout<<ans[i].first.first+1<<" "<<ans[i].first.second+1<<" "<<ans[i].second+1<<"\n";
    }

}


int main() {
    sareeeee3
    ll tt = 1;
//    freopen("sleepy.in", "r", stdin);
//    freopen("sleepy.out", "w", stdout);
    cin >> tt;
    for (int i = 0; i < tt; i++) {
        result();
//        cout << "\n";
    }
}
