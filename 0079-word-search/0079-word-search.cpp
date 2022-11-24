class Solution {
public:
    const vector<pair<int, int>> dir = {
        {-1, 0}, {1, 0}, {0, -1}, {0, 1}
    };
    vector<vector<char>> * _board;
    string * _word;
    bool found = false;
    int m, n, k;
    
    void dfs(int len, int x, int y)
    {
        if (len == k)
        {
            found = true;
            return;
        }

        vector<vector<char>> & board = * _board;
        string & word = * _word;
        if (x < 0 || x >= m || y < 0 || y >= n || word[len] != board[x][y])
        {
            return;
        }

        board[x][y] = '.';
        for (auto [dx, dy]: dir)
        {
            dfs(len + 1, x + dx, y + dy);
            if (found) {return;}
        }
        board[x][y] = word[len];
    }

    bool exist(vector<vector<char>>& board, string word) {
        _board = &board;
        _word = &word;
        m = board.size();
        n = board[0].size();
        k = word.size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == word[0])
                {
                    dfs(0, i, j);
                }
            }
        }

        return found;
    }
};