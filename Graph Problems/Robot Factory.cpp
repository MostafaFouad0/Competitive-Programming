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
ll a[N][N];
int vis[N][N] = {0};
ll n{}, m{};
ll area{};

string bi(ll num) {
    return bitset<4>(num).to_string();//converting the number to it's binary representation
}

void DFS(ll i, ll j) {
    if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] == 1) {
        // visited position or outside of the grid 
        return;
    }
    vis[i][j] = 1; // marking the position as visited 
    area++;
    string s = bi(a[i][j]); // binary number
    //cout<<s<<"\n";
    if (s[0] == '0') { // north
        DFS(i - 1, j);
    }
    if (s[1] == '0') { // east
        DFS(i, j + 1);
    }
    if (s[2] == '0') { // south
        DFS(i + 1, j);
    }
    if (s[3] == '0') { // west
        DFS(i, j - 1);
    }


}

void result() {

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    vector<ll> ans;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!vis[i][j]) {
                area = 0;
                DFS(i, j);
                ans.push_back(area);
            }
        }
    }
    sort(ans.rbegin(), ans.rend());
    for (auto an : ans) {
        cout << an << " ";
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
