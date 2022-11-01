class Solution {
public:
//     int solve(int ind,vector<int>&nums,int tar, vector<vector<int>>&dp)
//     {
//         if(ind==0)
//         {
//         if(tar%nums[ind]==0)
//             return tar/nums[0];
//         else
//             return 1e9;
//         }
//         if(dp[ind][tar]!=-1)
//             return dp[ind][tar];
        
//         int notpick=0+solve(ind-1,nums,tar,dp);
//         int pick=INT_MAX;
//         if(nums[ind]<=tar)
//             pick=1+solve(ind,nums,tar-nums[ind],dp);
//         return dp[ind][tar]=min(pick,notpick);
//     }
    int coinChange(vector<int>& coins, int amount)
    {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
     for(int i=0;i<=amount;i++)
     {
         if(i%coins[0]==0)
             dp[0][i]=i/coins[0];
         else
             dp[0][i]=1e9;
     }
        int notpick;
        int pick;
        for(int ind=1;ind<n;ind++)
        {
            for(int tar=0;tar<=amount;tar++)
            {
                  notpick=0+dp[ind-1][tar];
         pick=INT_MAX;
        if(coins[ind]<=tar)
            pick=1+dp[ind][tar-coins[ind]];
                
      dp[ind][tar]=min(pick,notpick);
            }
           
        }
          int ans=dp[n-1][amount];
        if(ans>=1e9)
            return -1;
        return ans;
        

        }
};