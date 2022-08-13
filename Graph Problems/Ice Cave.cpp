#include<bits/stdc++.h>
/*
 *
 * Created By : Mostafa Mahmoud
 *
 */

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 503;
char a[N][N];
bool vis[N][N];
ll si{}, sj{};
ll r1{}, c1{}, r2{}, c2{};
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll c{}, emt{};
ll mn = INT64_MAX;
ll n{}, m{}, k{};

bool ok(ll i, ll j) {
    return i >= 0 && i < n || j >= 0 && j < m;

}

void bfs(ll i=r1, ll j=c1) {
    queue<ll> qi;
    queue<ll> qj;
    qi.push(i);
    qj.push(j);
    while (!qi.empty()) {
        ll xi = qi.front();
        qi.pop();
        ll xj = qj.front();
        qj.pop();
        for (int y = 0; y < 4; ++y) {
            ll nw_x = xi + dx[y];
            ll nw_y = xj + dy[y];
            if(nw_x==r2&&nw_y==c2&&a[nw_x][nw_y]=='X'){
                cout<<"YES";
                return;
            }
            if (a[nw_x][nw_y] == '.' && ok(nw_x, nw_y)) {
                qi.push(nw_x);
                qj.push(nw_y);
                a[nw_x][nw_y]='X';
            }

        }
    }
    cout<<"NO";


}

void result() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    cin >> r1 >> c1 >> r2 >> c2;
    r1--,c1--,r2--,c2--;
    bfs();


}


int main() {
    sareeeee3
    ll tt = 1;
    //freopen("schedule.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    // cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}