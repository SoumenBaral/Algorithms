#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
vector<pair<int,int>>adj[N];
void dijkstra(int s){
    queue<int>q;
    q.push(s);
    q.pop();
}

int main ()
{
    int n,e;
    cin>>n>>e;
    while (e--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});

    }
    
    dijkstra(1);

    return 0;
}