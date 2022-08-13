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
    //greedy 
    string s;
    cin>>s;
    vector<ll>v;
    v.emplace_back(0);
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='R'){
            v.emplace_back(i+1);
        }
    }
    v.emplace_back(s.size()+1);
    ll tmp{},ans{};
    for (int i = 1; i < v.size(); ++i) {
        tmp=v[i]-v[i-1];
        ans= max(ans,tmp);
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
