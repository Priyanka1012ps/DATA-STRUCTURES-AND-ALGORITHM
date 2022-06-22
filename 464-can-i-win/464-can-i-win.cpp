class Solution {
public:
    unordered_map<int, bool> memo;
    bool canIWin(int M, int T) {
        if (T <= 0) return true;
        if (M * (M + 1) / 2 < T) return false;
        return dfs(M, T, 0);    
    }
    bool dfs(int M, int T, int state) {
        if (T <= 0) return false;
        if (memo.find(state) != memo.end()) return memo[state];
        for (int i = 0; i < M; ++i) {
            if (state & (1 << i)) continue;
            if (!dfs(M, T-(i+1), state | (1 << i))) return memo[state] = true;
        }
        return memo[state] = false;
    }
};