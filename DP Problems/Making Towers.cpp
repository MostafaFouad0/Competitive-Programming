/*
 * Created By : Mostafa Mahmoud
*/

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 1e5 + 9;
ll dp[N][2];
void result() {
    ll n{};
    cin>>n;
    for (int i = 1; i <=n; ++i) {
        for (int j = 0; j < 2; ++j) {
            //resetting
            dp[i][j]=0;
        }
    }

    for (int i = 1; i <=n; ++i) {
        ll tmp{};
        cin>>tmp;
        int state=i%2;
        dp[tmp][state]= max(dp[tmp][state],dp[tmp][!state]+1);
    }
    for (int i = 1; i <=n; ++i) {
        cout<<max(dp[i][0],dp[i][1])<<" ";
    }


}


int main() {
    sareeeee3
    ll tc = 1;
    cin >> tc;
    while (tc--) {
        result();
        cout << "\n";
    }
}