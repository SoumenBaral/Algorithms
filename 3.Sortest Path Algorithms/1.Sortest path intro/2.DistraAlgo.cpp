#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>pii;
const int N = 1e3+7;
vector<pii>adj[N];
const int INF = 1e9+7;
vector<int>dist(N,INF);
vector<bool>visited(N);
void dijkstra(int source){
    priority_queue<pii,vector<pii>,greater<pii>>pq;
  dist[source]=0;
    pq.push({0,source});
 
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
           visited[u]=true;
        for(pii vPair:adj[u]){
            int v = vPair.first;
            int w = vPair.second;
            if(visited[v])continue;
            if(dist[v]>dist[u]+w)
            {
                dist[v]= dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
}
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i= 0; i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    dijkstra(1);
    for (int i = 1; i <=n; i++)
    {
        cout<<"Distance of node "<<i<<": ";
        cout<<dist[i]<<endl;
    }
    
    return 0;
}