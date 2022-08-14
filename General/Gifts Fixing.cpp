#include<bits/stdc++.h>
/*
 *
 * Created By : Mostafa Mahmoud
 *
 */

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 1e3 + 5;


void result() {
    ll n{};
    cin>>n;
    ll a[n],b[n];
    ll mn1=INT64_MAX;
    ll mn2=INT64_MAX;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        mn1=min(mn1,a[i]);
    }
    for (int i = 0; i < n; ++i) {
        cin>>b[i];
        mn2=min(mn2,b[i]);
    }
    ll ans{};
    for (int i = 0; i < n; ++i) {
        if(a[i]!=mn1){
            ll tmp= abs(a[i]-mn1);
            ans+=tmp;
            if(b[i]!=mn2){
                if(b[i]-tmp<mn2){
                    b[i]=mn2;
                }else{
                    b[i]-=tmp;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if(b[i]!=mn2){
            ans+= abs(b[i]-mn2);
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