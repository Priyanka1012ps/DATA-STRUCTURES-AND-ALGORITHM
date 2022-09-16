class Solution {
public:
    int solve (int i, int k, vector<int> &nums, vector<int> &muls, vector<vector<int>> &dp) {
        if (k == muls.size ()) {
            return 0;
        }
        if (dp[i][k] != INT_MIN) {
            return dp[i][k];
        }
        int j = nums.size ()-1 - (k-i);
        int front = nums[i]*muls[k] + solve (i+1,k+1,nums,muls,dp);
        int back = nums[j]*muls[k] + solve (i,k+1,nums,muls,dp);
        return dp[i][k] = max (front,back);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n = multipliers.size ();
        int k = 0;
        vector<vector<int>> dp (n+1, vector<int> (n+1,INT_MIN));
        return solve (0,k,nums,multipliers,dp);
    }
};