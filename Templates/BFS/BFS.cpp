void BFS(int Node) {
    is_visited[node] = true;
    queue<int> q;
    // starting the search from the parent node
    q.push(node);
    while (!q.empty()) {
        int current_node = q.front();
        q.pop();
        cout << current_node << " ";
        for (int child: adjlist[current_node]) {
            if (!is_visited[child]) {
                is_visited[child] = true; // to avoid cycles
                q.push(child);
            }
        }
    }
}