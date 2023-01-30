class Solution {
public:
    int solveMem(int n, vector<int>&dp)
    {
        if(n == 1 or n == 2)return 1;
        if(n == 0)return 0;
        
        if(dp[n]!=-1)return dp[n];
        
        return dp[n] = solveMem(n-1,dp)+solveMem(n-2,dp)+solveMem(n-3,dp);
    }
	
	int tribonacci(int n) 
    {   
        vector<int>dp(n+1,-1);
        return solveMem(n,dp);
    }
};