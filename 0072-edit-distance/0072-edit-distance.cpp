class Solution {
public:
    int dp[505][505];
    string s, t;

    int solve(int i, int j) {     
        if(i == s.size()) return t.size()-j;
        if(j == t.size()) return s.size()-i;
        if(dp[i][j] != -1) return dp[i][j];
        int ans;
        if(s[i] == t[j]) ans = solve(i+1, j+1);
        else {
            int deleted = 1 + solve(i+1, j);
            int inserted = 1 + solve(i, j+1);
            int replaced = 1 + solve(i+1, j+1);
            ans = min({deleted, inserted, replaced});
        }
        return dp[i][j] = ans;
    }
    
    int minDistance(string word1, string word2) {
        memset(dp, -1, sizeof(dp));
        s = word1;
        t = word2;
        int ans = solve(0, 0);
        return ans;
    }
};