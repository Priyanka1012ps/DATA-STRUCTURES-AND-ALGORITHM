using limit = std::numeric_limits<int>;

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        if (A.empty() || A.front().empty()) {
            return 0;
        }
        int m = (int) A.size(), n = (int) A.front().size();
        std::vector<std::vector<int>> dp(m, std::vector<int>(n + 2, limit::max()));
        int answer = limit::max();
        for (int i = 0; i < m; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = A[i][j - 1];
            }
        }
        for (int i = m - 2; i >= 0; i--) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] += std::min(
                    dp[i + 1][j - 1], 
                    std::min(dp[i + 1][j], dp[i + 1][j + 1])
                );
            }
        }
        for (int i = 1; i <= n; i++) {
            answer = std::min(answer, dp[0][i]);
        }
        return answer;
    }
};
