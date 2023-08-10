#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while(!q.empty()){
        // pop the node and push unvisited neighbour int the queue;
         int u =q.front();
            q.pop();
            cout<<"Node level "<<level[u] <<" : "<<u<<endl;
        for(int v: adj[u]){
            if(visited[v]==true)continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
        }
    }
    
}
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    cout<<"==========================================>"<<endl;
    cout<<"==========================================>"<<endl;

    for(int i=1;i<=n;i++){
        cout<<"Level "<<i<< ": "<<level[i]<<endl;
    }
    return 0;
}