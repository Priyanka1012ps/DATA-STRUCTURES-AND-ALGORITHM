class Solution {
public:
    int solve(int ind,vector<int>&nums,int tar, vector<vector<int>>&dp)
    {
        if(ind==0)
        {
        if(tar%nums[ind]==0)
            return tar/nums[0];
        else
            return 1e9;
        }
        if(dp[ind][tar]!=-1)
            return dp[ind][tar];
        
        int notpick=0+solve(ind-1,nums,tar,dp);
        int pick=INT_MAX;
        if(nums[ind]<=tar)
            pick=1+solve(ind,nums,tar-nums[ind],dp);
        return dp[ind][tar]=min(pick,notpick);
    }
    int coinChange(vector<int>& coins, int amount)
    {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
     int ans= solve(n-1,coins,amount,dp);
        if(ans>=1e9)
            return-1;
        return ans;

        }
};