#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,e;
    cin>>n>>e;
    vector <int> adj[n+1];
    for (int i = 0; i <= n; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i= 0; i<=n; i++){
        cout<<"Index "<<i<<" : ";
        // for(int v:adj[i]){
        //     cout<<v<<" ";
        // }
        for(int j = 0 ; j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}