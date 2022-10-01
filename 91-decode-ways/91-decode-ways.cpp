class Solution {
public:
    int check(string s, int n, vector<vector<int>>& dp, int idx = 0, int curr = -1){
        if(idx == n){
            if(curr != 0 && curr<=26) return 1;
            return 0;
        }
        if(curr == 0 || curr>26) return 0;
        if(curr != -1 && dp[idx][curr] != -1) return dp[idx][curr];
        int x = check(s, n, dp, idx+1, s[idx]-'0');
        int y = curr != -1 ? check(s, n, dp, idx+1, curr*10 + (s[idx]-'0')) : 0;
        if(curr != -1) dp[idx][curr] = x+y;
        return x+y;
    }
    
    int numDecodings(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(27, -1));
        return check(s, n, dp);
    }
};