void DFS(int Node) {
    is_visited[node] = true;
    stack<int> st;
    // starting the search from the parent node
    st.push(node);
    while (!st.empty()) {
        int current_node = st.top();
        st.pop();
        for (int child: adjlist[current_node]) {
            if (!is_visited[child]) {
                is_visited[child] = true; // to avoid cycles
                st.push(child);
            }
        }
    }
}