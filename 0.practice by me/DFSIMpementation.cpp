#include<bits/stdc++.h>
using namespace std;
const int  N = 1e5+5;
vector<int>adjList[N];
int visited[N];
void dfs(int u){
     cout << u << endl;
    visited[u] = 1;
    for (int adj_node : adjList[u]) {
        if (visited[adj_node] == 0) {
            dfs(adj_node);
        }
    }
}
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i =0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);//just use it for only for Directed Graph
        adjList[v].push_back(u);//Undirected Graph
        
    }
   dfs(1);
    
    
    return 0;
}