class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<vector<pair<int,int>>> g(n); 

        for(auto &r : redEdges) 
            g[r[0]].push_back({r[1], 1});   
        for(auto &b : blueEdges) 
            g[b[0]].push_back({b[1], 0});    

        vector<int> dist(n, -1);        

        queue<vector<int>> q;
        q.emplace(vector<int>{0, -1, 0});   
        dist[0] = 0;

        while(!q.empty()) {
            auto f = q.front(); q.pop();
            int u = f[0], d = f[2], prev_color = f[1];

            for(auto &x : g[u]) {
                int v = x.first, cur_color = x.second;

                if(prev_color != cur_color && v != -1) {
                    if(dist[v] > d  || dist[v] == -1) dist[v] = d + 1;
                    q.emplace(vector<int>{v, cur_color, d + 1});
                    x.first = -1;   
                }
            }
        }

        return dist;
    }
};