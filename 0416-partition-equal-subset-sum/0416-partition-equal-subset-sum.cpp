class Solution {
public:
    bool solve(int ind,int target ,vector<int>&nums, vector<vector<int>>&dp)
    {
        if(target==0)
            return true;
        if(ind==0)
            return(target==nums[0]);
        if(dp[ind][target]!=-1)
            return dp[ind][target];
        bool not_take=solve(ind-1,target,nums,dp);
        bool take=false;
        if(nums[ind]<=target)
            take=solve(ind-1,target-nums[ind],nums,dp);
        
        return dp[ind][target]=take or not_take;
    }
    bool canPartition(vector<int>& nums)
    {
        int n= nums.size();
        int s=0;
        
        
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        if(s%2!=0)
            return false;
        int target=s/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(n-1,target,nums,dp);
    }
};