class Solution {
public:
int solve(int ind,vector<int>&nums,int tar,vector<vector<int>>&dp)
{
    if(ind==0)
    {
        if(tar==0 and nums[0]==0)
            return 2;
        if(tar==nums[0] or tar==0)
            return 1;
        return 0;
            
    }
    if(dp[ind][tar]!=-1)
        return dp[ind][tar];
    int notpick=solve(ind-1,nums,tar,dp);
    int pick=0;
    if(nums[ind]<=tar)
        pick=solve(ind-1,nums,tar-nums[ind],dp);
    return dp[ind][tar]=pick+notpick;
}
    int count(int ind,vector<int>&nums,int target)
    {
        int totsum=0;
         for(int i=0;i<ind;i++)
        {
            totsum+=nums[i];
        }
        if(totsum-target<0) return 0;
    if((totsum-target)%2==1) return 0;
    
    int s2 = (totsum-target)/2;
       vector<vector<int>>dp(ind,vector<int>(s2+1,-1));
        return solve(ind-1,nums,s2,dp);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int totsum=0;
        int n=nums.size();
       
        return count(n,nums,target);
    }
};