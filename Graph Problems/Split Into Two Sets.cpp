/*
 * Created By : Mostafa Mahmoud
*/

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 2e5 + 9;
vector<ll>adj_list[N];
int vis[N]={0};
int current_color[N];
bool BFS_Bipartite(ll node){
    // setting the current color of the parent node to 1 (any unique number)
    current_color[node]=1;
    // queue for iterative BFS
    queue<ll>q;
    q.push(node);
    // marking the current node as visited
    vis[node]=1;
    while (!q.empty()){
        ll cur=q.front();
        q.pop();
        for(auto child:adj_list[cur]){//iterating over the children of the parent node
            if(child==cur){ // self loop
                return false; // the graph is not Bipartite
            }
            if(current_color[child] == -1){ // if the child node has no color
                current_color[child]=!current_color[cur]; // set the child node color to the opposite color of the parent node
                vis[child]=1; // mark the child node as visited
                q.push(child);
            }else if(current_color[cur] == current_color[child]){ // if the child node has the same color as the parent node
                return false; // not a Bipartite graph
            }

        }
    }
    // if we reach this then the graph is Bipartite so we return true
    return true;
}

void result() {
    ll n{};
    cin>>n;
    map<ll,ll>m;
    bool check= true;
    for (int i = 0; i <=n; ++i) {
        adj_list[i].clear();
    }
    memset(vis,0,sizeof vis);
    memset(current_color, -1, sizeof current_color);
    for (int i = 0; i < n; ++i) {
        ll u,v;
        cin>>u>>v;
        // creating the adj_list for the graph
        adj_list[u].emplace_back(v);
        adj_list[v].emplace_back(u);
        m[u]++,m[v]++;
        if(m[u]==3||m[v]==3){ // the graph can't be Bipartite
            check=false;
        }
    }
    if(!check){
        cout<<"NO";
        return;
    }
    for (int i = 1; i <=n; ++i) {
        if(vis[i]==0){
            if(!BFS_Bipartite(i)){
                cout<<"NO";
                return;
            }
        }
    }
    cout<<"YES";




}


int main() {
    sareeeee3
    ll tc = 1;
    cin >> tc;
    while (tc--) {
        result();
        cout << "\n";
    }
}