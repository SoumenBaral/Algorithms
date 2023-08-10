#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>adjList[N];
int visited[N];
void dfs(int u){
     visited[u]=1;
     for(int v : adjList[u]){
        if(visited[v]==0){
            dfs(v);
        }
     }
     cout<<u<<" ";

}
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);

    }
    dfs(1);
    return 0;
}