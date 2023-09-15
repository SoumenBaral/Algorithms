// #include<bits/stdc++.h>
// using namespace std;
// // Create the Adjaycency  List 
// const int N = 1e5+1;
// vector<int> Graph_list[N];
// int dist[N];
// bool visited[N];

// void BFS(int src){
//     // Create the queue
//     queue<int> q;
//     q.push(src);
//     dist[src] = 0;
//     visited[src] = true;

//     while (!q.empty())
//     {
//         int parent = q.front();
//         q.pop();
//         cout << parent << endl;
//         for (auto &&v : Graph_list[parent])
//         {
//             if(visited[v]) continue;
//             q.push(v);
//             dist[v] = dist[parent] + 1;
//             visited[v] = true;
//         }
        
//     }
    

// }
// int main(){

//     int n, e; cin >> n >> e;
//     for (int i = 0; i < n; i++){
//         int v1,v2; cin >> v1 >> v2;
//         Graph_list[v1].push_back(v2);
//         Graph_list[v2].push_back(v1);
//     }
    
//     BFS(1);
     
//     for (int i = 1; i <=n; i++)
//     {
//         cout << "Distance of " << i << " is : ";
//         cout << dist[i] << endl;
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dis[N];
bool vis[N];
vector<int> v[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dis[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout << parent << endl;
        for (int i = 0; i < v[parent].size(); i++)
        {
            int child = v[parent][i];
            if (vis[child] == false)
            {
                q.push(child);
                dis[child] = dis[parent] + 1;
                vis[child] = true;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << ": " << dis[i] << endl;
    }
    return 0;
}