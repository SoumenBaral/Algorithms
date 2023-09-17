#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
int dis[N];
bool vis[N];
vector<int>adj[N];
vector<int>cmp;
void dfs(int s){
    vis[s]=true;
    cmp.push_back(s);
    for(int child:adj[s]){
        if(!vis[child])dfs(child);
    }
}
int main ()
{
    int n,e;
    cin>>n>>e;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    int count = 0;
    for(int i= 1; i<=n;i++){
        if(!vis[i]){
            count++;
            dfs(i);
            for (int val : cmp)
            {
                cout << val << " ";
            }
            cout << endl;
            cmp.clear();
        }
    }   
    cout<<count; 
    return 0;
}