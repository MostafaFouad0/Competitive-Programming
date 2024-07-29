void check_cycle(int u) {
    vis[u] = 1;
    for (auto it: adj[u]) {
        if (!vis[it]) {
            check_cycle(it);
        } else {
            if (vis[it] == 1)cycle = true;
        }
    }
    vis[u] = 2;
}
