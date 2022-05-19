class Solution {
public:
    int ans = 0, n, m;
    int dirs[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    vector<vector<int>> record;
    int dfs(int x, int y, vector<vector<int>>& matrix) {
        if (record[x][y]) return record[x][y]; 
        record[x][y] = 1;
        for (auto &dir : dirs) {
            int nx = x + dir[0], ny = y + dir[1];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || matrix[nx][ny] <= matrix[x][y]) continue;
            record[x][y] = max(record[x][y], 1 + dfs(nx, ny, matrix));
        }
        return record[x][y];
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n = matrix.size(); if (n == 0) return 0;
        m = matrix[0].size(); if (m == 0) return 0;
        record = vector<vector<int>> (n, vector<int> (m, 0));
        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < m; ++j) 
                ans = max(ans, dfs(i, j, matrix));
        return ans;
    }
};