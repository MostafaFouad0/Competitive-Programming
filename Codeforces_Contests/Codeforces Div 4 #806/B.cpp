/*
 * Created By : Mostafa Mahmoud
 */

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 22;


void result() {
    ll n{};
    cin >> n;
    string s;
    cin>>s;
    map<char,ll>m;
    ll c{};
    for (int i = 0; i < s.size(); ++i) {
        m[s[i]]++;
        if(m[s[i]]==1){
            c+=2;
        }else{
            c++;
        }
    }
    cout<<c;


}


int main() {
    sareeeee3
    ll tt = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}