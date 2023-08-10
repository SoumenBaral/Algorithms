#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>adj[N];
bool visited[N];
int Depth[N];
void dfs(int u){
    visited[u]=true;
    
    for(int v: adj[u])
    {
    
        if(visited[v]==true)continue;
            Depth[v]=Depth[u]+1;
              dfs(v);
    }
    
}
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v); 

    }
    int x;
    cin>>x;
  dfs(1);
cout<<"Depth of  "<<x<< ": " <<Depth[x]<<endl;
    
    return 0;
}