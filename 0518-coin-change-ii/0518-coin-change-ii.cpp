class Solution {
public:
    int solve(int ind,int tar,vector<int>&nums, vector<vector<int>>&dp)
    {
        if(ind==0)
        {
           return(tar%nums[0]==0);
              
        }
        if(dp[ind][tar]!=-1)
            return dp[ind][tar];
        int notpick=solve(ind-1,tar,nums,dp);
        int pick=0;
        if(nums[ind]<=tar)
            pick=solve(ind,tar-nums[ind],nums,dp);
        return dp[ind][tar]=pick+notpick;
        
    }
    int change(int amount, vector<int>& coins)
    {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return solve(n-1,amount,coins,dp);
    }
};