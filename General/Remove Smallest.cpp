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
    if(n==1){
        cout<<"YES";
        return;
    }
    sort(a,a+n);
    stack<ll>st;
    for (int i = 0; i < n; ++i) {
        ll tmp=a[i];
        if(st.empty()){
            st.push(tmp);
        }else{
            if(abs(st.top()-tmp)<=1){
                st.pop();
                st.push(tmp);
            }else{
                cout<<"NO";
                return;
            }
        }
    }
    cout<<"YES";



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