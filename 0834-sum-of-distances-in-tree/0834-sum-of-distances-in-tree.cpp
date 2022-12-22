class Solution {
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
         vector<int> sum(n);
    
    vector<vector<int>> adj(n);
    
    vector<int> sz(n);

    
    for (auto& edge : edges) {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
        sz[edge[0]]++;
        sz[edge[1]]++;
    }

    
    function<void(int, int)> dfs = [&](int u, int prev) {
        sz[u] = 1;
        sum[u] = 0;
        for (int v : adj[u]) {
            if (v != prev) {
                dfs(v, u);
                sz[u] += sz[v];
                sum[u] += sum[v] + sz[v];
            }
        }
    };

    dfs(0, -1);

    
    function<void(int, int, int)> dfs2 = [&](int u, int prev, int total) {
        for (int v : adj[u]) {
            if (v != prev) {
                sum[v] = total - sz[v] + (n - sz[v]);
                dfs2(v, u, sum[v]);
            }
        }
    };

    dfs2(0, -1, sum[0]);

    return sum;
    }
};