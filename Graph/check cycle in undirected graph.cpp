vector<vector<int>> adj;
vector<int> vis;
bool check_cycle(int u, int par) {
    vis[u] = 1;
    for (auto it: adj[u]) {
        if (!vis[it]) {
            if (check_cycle(it, u))return true;
        } else if (it != par)return true;
    }
    return false;
}
