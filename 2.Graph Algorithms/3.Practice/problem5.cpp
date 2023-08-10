#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>adj[N];
bool visited[N];
int Height[N];
void dfs(int u){
    visited[u]=true;
    
    for(int v: adj[u])
    {
    
        if(visited[v]==true)continue;
          
              dfs(v);
             if(Height[v]+1>Height[u]){
                Height[u]=Height[v] + 1;
            }
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
cout<<"Height of  "<<x<< ": " <<Height[x]<<endl;
    
    return 0;
}