void topological_sort(int u, vector<int> &order) {
    vis[u] = true;
    for (auto it: adj[u]) {
        if (vis[it])continue;
        topological_sort(it, ans);
    }
    order.push_back(u);
}
