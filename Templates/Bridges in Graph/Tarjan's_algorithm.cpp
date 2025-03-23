int timer{};
vector<array<int, 2>> bridges;
void dfs(int u,int par)
{
    vis[u] = true;
    in[u] = low[u] = timer++;
    for (auto it : adj[u])
    {
        if (it == par)continue;
        if (!vis[it])
        {
            dfs(it, u);
            low[u] = min(low[u], low[it]);
            if (low[it] > in[u])
            {
                bridges.push_back({u, it});
            }
        }
        else
        {
            low[u] = min(low[u], low[it]);
        }
    }
}
