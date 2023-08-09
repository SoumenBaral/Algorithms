#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adjMatrix[N][N];
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i = 0; i<m;i++){
        int u,v;
        cin>>u>>v;
        adjMatrix[u][v]=1;//Directed Graph
        adjMatrix[v][u]=1;//unDirected Graph
    }

    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=n;j++){
            cout<<adjMatrix[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}