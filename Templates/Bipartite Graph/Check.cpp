vector<int> vis;
vector<bool> color;

bool dfs(int u) {
  // return true if it's bipartite 
    vis[u] = true;
    bool f = true;
    for (auto it: adj[u]) {
        if (!vis[it]) {
            color[it] = !color[u];
            f &= dfs(it);
        } else {
            if (color[it] == color[u])f = false;
        }
    }
    return f;
}
