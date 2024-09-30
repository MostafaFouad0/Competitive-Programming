/// get any negative cycle in the graph
int bellman(int node) {
    // all elements have cost 0
    cost[node] = 0;
    int x = -1;
    for (int i = 0; i < n; ++i) {
        bool f = false;
        x = -1;
        for (auto [u, v, w]: edgs) {
            if (cost[v] > cost[u] + w) {
                cost[v] = max((ll) -INT64_MAX, cost[u] + w);
                par[v] = u; // to get the path
                f = true;
                x = v;
            }
        }
        if (!f)break;
    }
    return x; // -1 if there is a negative cycle, else there is no negative cycle
}
