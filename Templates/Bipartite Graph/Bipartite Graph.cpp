/*
 * Created By : Mostafa Mahmoud
*/
bool BFS_Bipartite(int node){
    // setting the current color of the parent node to 1 (any unique number)
    current_color[node]=1;
    // queue for iterative BFS
    queue<int>q;
    q.push(node);
    // marking the current node as visited
    vis[node]=1;
    while (!q.empty()){
        int cur=q.front();
        q.pop();
        for(auto child:adj_list[cur]){//iterating over the children of the parent node
            if(child==cur){ // self loop
                return false; // the graph is not Bipartite
            }
            if(current_color[child] == -1){ // if the child node has no color
                current_color[child]=!current_color[cur]; // set the child node color to the opposite color of the parent node
                vis[child]=1; // mark the child node as visited
                q.push(child); // pushing the child node to the queue
            }else if(current_color[cur] == current_color[child]){ // if the child node has the same color as the parent node
                return false; // not a Bipartite graph
            }

        }
    }
    // if we reach this then the graph is Bipartite so we return true
    return true;
}
