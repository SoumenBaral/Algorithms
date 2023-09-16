#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
vector<pair<int ,int>>adj[N];
int dis[N];
bool visited[N];
void dijkstra (int s){
   
   priority_queue< pair<int,int>,vector< pair<int,int>>,greater< pair<int,int>>>pq;
    pq.push({0,s});
    dis[s] = 0;
    while (!pq.empty())
    {
        pair<int,int> parent = pq.top();
        pq.pop();
        int parentNode = parent.second;
       
        if(visited[parentNode]){
            continue;
        }
        visited[parentNode] = true;
         int parentCost = parent.first;
        for(int i = 0 ; i<adj[parentNode].size();i++){
           
            pair<int,int>child = adj[parentNode][i];
            int childNode = child.first;
            int childCost = child.second;
            if(parentCost+childCost<dis[childNode]){
                dis[childNode]= parentCost+childCost;
                pq.push({dis[childNode],childNode});
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