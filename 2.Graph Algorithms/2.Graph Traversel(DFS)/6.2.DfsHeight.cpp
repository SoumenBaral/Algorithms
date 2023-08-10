#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>adj[N];
bool visited[N];
// int Depth[N];
int Height[N];
void dfs(int u){
    //Section 1
    //Action just after entering the node u
    visited[u]=true;
    cout<<"visited Node : "<<  u<<endl;
    
    for(int v: adj[u])
    {
        //Section 2
        //Action Before Entering Neighbor
        if(visited[v]==true)continue;
            // Depth[v]=Depth[u]+1;
              dfs(v);
              if(Height[v]+1>Height[u]){
                Height[u]=Height[v]+1;
              }
              

      
        //Section 3
        //Action After Exiting the Neighbor

    }
    //Section 4
    //Action Before Exiting Node u
}
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;//W for Weighted Graph
        adj[u].push_back(v); //Its for Directed Graph
        // adj[v].push_back(u); //Its for Undirected Graph

    }
    // for(int i=1;i<=n;i++){
    //     cout<<"list "<<i<<" : ";
    //     for(int j:adj[i]){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;

    // }
  dfs(1);
  cout<<"Visiting array"<<":"<<endl;
  for(int i=1; i<=n; i++){
    cout<<"Height of  "<<i<< ": " <<Height[i]<<endl;
  }
    
    return 0;
}