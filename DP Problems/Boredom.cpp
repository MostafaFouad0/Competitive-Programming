#include<bits/stdc++.h>
/*
 * Created By : Mostafa Mahmoud
*/
#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const ll sizz=1e7;
ll memo[sizz],a[sizz];
ll mx{};
map<ll,ll>mp2;

ll dp(ll i){
    if(i>mx){
        return 0;
    }
    if(memo[i]!=-1){
        return memo[i];
    }
    return memo[i]= max(i*mp2[i]+dp(i+2),dp(i+1));

}

void result() {
  ll n{};
    memset(memo,-1,sizeof (memo));
  cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        mp2[a[i]]++;
        mx= max(mx,a[i]);
    }
  cout<<dp(1);
}




int main ()
{
    sareeeee3
    ll t=1;
   // cin>>t;
    while(t--) {
        result();
        cout<<"\n";
    }
}