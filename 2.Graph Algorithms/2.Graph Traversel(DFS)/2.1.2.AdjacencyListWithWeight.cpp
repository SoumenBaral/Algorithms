#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<pair<int,int>>adj[N];
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;//W for Weighted Graph
        adj[u].push_back({v,w}); //Its for Directed Graph
        // adj[v].push_back({u,w}); //Its for Undirected Graph

    }
    for(int i=1;i<=n;i++){
        cout<<"list "<<i<<" : ";
        for(auto j:adj[i]){
            cout<<"("<<j.first<<","<<j.second<<")"<<" ";
        }
        cout<<endl;

    }
  
    
    return 0;
}