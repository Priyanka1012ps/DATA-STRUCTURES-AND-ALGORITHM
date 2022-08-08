class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size(),maxa,ans=INT_MIN;
        int dp[n];
        dp[0]=1;
        
        for(int i=1;i<n;i++)
        {
            maxa=-1;
            for(int j=i-1;j>=0;j--)
            {
                if(nums[i]>nums[j])
                {
                    if(dp[j]>maxa)
                    {
                        maxa=dp[j];
                    }
                }
            }
            if(maxa==-1)
                dp[i]=1;
            else
                dp[i]=maxa+1;
        }
        
        for(int i=0;i<n;i++)
        {
            ans = max(ans,dp[i]);
        }
        
        return ans;
    }
};