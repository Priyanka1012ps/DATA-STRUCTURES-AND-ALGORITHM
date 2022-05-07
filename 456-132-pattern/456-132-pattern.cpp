class Solution {
public:
   bool find132pattern(vector<int>& nums) 
{  
    int n=nums.size();
    
    vector<int> dp(n,INT_MIN);
    stack<int> st;
    
    st.push(INT_MAX);
    
    for(int i=n-1;i>0;i--)
    {
        while(st.top()<nums[i])
        {
            dp[i]=max(st.top(),dp[i]);
            
            st.pop();
        }
        
        
        st.push(nums[i]);

    }
    
    
    int val=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(val<nums[i]&&dp[i]>val)
            return true;
        
        val=min(val,nums[i]);
                
    }
    
    
    return false;
}
};