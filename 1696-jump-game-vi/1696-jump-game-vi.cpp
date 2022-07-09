class Solution {
public:

    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long> dp(n,0);
        deque<long long> dq;
        dq.push_back(0);
        dp[0]=nums[0];
        
        for(int i=1;i<min(k,n);i++)
        {
            dp[i]=nums[i]+dp[dq.front()];
            
            while(!dq.empty()&&dp[dq.back()]<=dp[i]) dq.pop_back();
            dq.push_back(i);
        }
        
        for(int i=k;i<n;i++)
        {
            dp[i]=nums[i]+dp[dq.front()];
            
            while(!dq.empty()&&dp[dq.back()]<=dp[i]) dq.pop_back();
            dq.push_back(i);
            
             if(dq.front()==i-k) dq.pop_front();
        }
        
        return dp[n-1];
    }
};