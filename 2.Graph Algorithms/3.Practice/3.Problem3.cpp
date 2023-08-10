#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            bool found = false;
            for (int k : adj[i]) {
                if (k == j) {
                    found = true;
                    break;
                }
            }
            if (found) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
