class Solution {
public:
    
    int dp[1002][102][2];
    
    int helper(vector<int>& prices, int k, int pos, int buy){
        
        if(k==0 || pos>=prices.size()){
            return 0;
        }
        
        int res=0;
        
        if(dp[pos][k][buy]!=-1){
            return dp[pos][k][buy];
        }
        
        if(buy){
            res= max( helper(prices,k,pos+1,0) - prices[pos] , 
                                    helper(prices,k,pos+1,1));
        }
        else{
            res= max(helper(prices,k-1,pos+1,1) + prices[pos] , 
                                    helper(prices,k,pos+1,0)); 
        }
        
        return dp[pos][k][buy]=res;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        memset(dp, -1, sizeof(dp));
        
        return helper(prices,k,0,1);
    }
};