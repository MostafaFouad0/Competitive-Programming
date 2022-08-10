/*
 *
 * Created By : Mostafa Mahmoud
 *
 */
#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 2e5 + 9;


void result() {
    ll n{};
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n; ++i) {
        if(s[i]=='R'){
            for (int j = i+1; j <n ; ++j) {
                if(s[j]!='R'){
                    cout<<j<<" "<<j+1;
                    return;
                }
            }
        }
        if(s[i]=='L'){
            cout<<i+1<<" "<<i;
            return;
        }
    }



}


int main() {
    sareeeee3
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}