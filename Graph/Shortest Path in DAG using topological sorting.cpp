vector<vector<pair<int, int>>> adj;
vector<int> vis;

void topo(int u, vector<int> &ret) {
    vis[u] = true;
    for (auto it: adj[u]) {
        if (!vis[it.F]) {
            topo(it.F, ret);
        }
    }
    ret.push_back(u);
}


void solve() {
    int n, m;
    cin >> n >> m;
    adj = vector<vector<pair<int, int>>>(n + 1, vector<pair<int, int>>());
    vis = vector<int>(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    vector<int> dis(n + 1, 1e9);
    dis[1] = 0; // assuming that the source node is 1 
    vector<int> ans;
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            topo(i, ans);
        }
    }
    for (int i = ans.size() - 1; i >= 0; i--) {
        int now = ans[i];
        for (auto it: adj[now]) {
            if (it.S + dis[now] < dis[it.F]) {
                dis[it.F] = it.S + dis[now];
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << dis[i] << " ";
    }

}
