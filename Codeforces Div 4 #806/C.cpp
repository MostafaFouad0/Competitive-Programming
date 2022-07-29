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
    cin>>n;
    ll a[n];
    vector<string>v(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
        ll tmp{};
        cin>>tmp;
        cin>>v[i];
    }
    for (int i = 0; i < n; ++i) {
        ll curr=a[i];
        for (int j = 0; j < v[i].size(); ++j) {
            if(v[i][j]=='U'){
                if(curr==0){
                    curr=9;
                }else{
                    curr--;
                }
            }else if(v[i][j]=='D'){
                if(curr==9){
                    curr=0;
                }else{
                    curr++;
                }
            }
        }
        a[i]=curr;
    }
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }


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