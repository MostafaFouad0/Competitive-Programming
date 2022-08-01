#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/
#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 1e5+9;
ll a[N],b[N];
ll memo[N][2];
ll n{};
ll dp(ll i=1,int check=0){
    if(i==n-1){
        return 1;
    }
    ll &ret =memo[i][check];
    if(ret!=-1){
        return ret;
    }
    ret=0;
    ret= max(ret, dp(i+1,0));
    if(a[i]-b[i]>a[i-1]&&!check){
        ret= max(ret, dp(i+1,0)+1);
    }
    if(a[i]+b[i]<a[i+1]){
        ret= max(ret, dp(i+1,1)+1);
    }
    if(a[i-1]+b[i-1]<a[i]-b[i]){
        ret= max(ret, dp(i+1,0)+1);
    }
    return ret;
}

void result() {
    memset(memo,-1,sizeof memo);
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i]>>b[i];
    }
    if(n==1){cout<<1;
        return;}
    cout<<dp()+1;






}


int main() {
    sareeeee3
    ll tt = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    // cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}