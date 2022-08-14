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
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    map<ll,ll>m,m2;
    for (int i = 1; i <n ; ++i) {
        m2[a[i-1]]++;
        if(a[i-1]>a[i] or m.find(a[i])!=m.end()){
            for(auto it:m2){
                m[it.first]=1;
            }
            m2.clear();
        }
    }
    cout<<m.size();



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