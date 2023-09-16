#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
vector<pair<int ,int>>adj[N];
int dis[N];
void dijkstra (int s){
    queue<int>q;
    q.push(s);
    dis[s] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(int i = 0 ; i<adj[parent].size();i++){
            // int childNode = adj[parent][i].first;
            // int childCost = adj[parent][i].second;
            pair<int,int>child = adj[parent][i];
            int childNode = child.first;
            int childCost = child.second;
            if(dis[parent]+childCost<dis[childNode]){
                dis[childNode]= dis[parent]+childCost;
                q.push(childNode);
            }

        }
    }
    
}
int main ()
{
    int n, e;
    cin>>n>>e;
    while (e--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});

    }
    for(int i= 1; i<=n;i++){
        dis[i]=INT_MAX;
    }
    dijkstra(1);  
    for (int i = 1; i <= n; i++)
    {
        cout<<"Node "<<i<<" : "<<dis[i]<<endl;
    }
      
    return 0;
}