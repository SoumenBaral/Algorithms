#include<bits/stdc++.h>
using namespace std;
const int  N = 1e5+5;
vector<int>adjList[N];
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i =0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);//just use it for only for Directed Graph
        adjList[v].push_back(u);//Undirected Graph
        
    }
    for(int i = 1;i<=n;i++){
        cout<<"list  "<<i<<": ";
       for(int j:adjList[i]){
        cout<<j<<" ";
       }
       cout<<endl;
    }
    
    return 0;
}